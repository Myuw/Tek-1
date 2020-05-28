#!/usr/bin/env python3
##
## EPITECH PROJECT, 2020
## models.py
## File description:
## model
##

import sys
from app import app
import pymysql as sql

def get_connection():
    connect = sql.connect(host=app.config['DATABASE_HOST'],
                            unix_socket=app.config['DATABASE_SOCK'],
                            user=app.config['DATABASE_USER'],
                            passwd=app.config['DATABASE_PASS'],
                            db=app.config['DATABASE_NAME']
                            )
    return connect

def user_exists(user):
    connect = get_connection()
    with connect.cursor() as cursor:
        payload = 'SELECT * FROM user WHERE username = \'' + user + '\''
        cursor.execute(payload)
        if cursor.fetchone() == None:
            connect.close()
            return False
        connect.close()
        return True

def get_user_by_id(uid):
    connect = get_connection()
    with connect.cursor() as cursor:
        payload = 'SELECT username FROM user WHERE user_id = \'' + uid + '\''
        cursor.execute(payload)
        result = cursor.fetchone()
        if result != None:
            return result[0]
        else:
            return "no_match"
    return

def get_new_id():
    connect = get_connection()
    with connect.cursor() as cursor:
        tmp = 0
        payload = 'SELECT user_id FROM user ORDER BY user_id'
        cursor.execute(payload)
        result = cursor.fetchall()
        for i in result:
            if i[0] >= tmp:
                tmp = i[0];
        connect.close()
    return tmp + 1;

def get_new_task_id():
    connect = get_connection()
    tasks = []
    with connect.cursor() as cursor:
        tmp = 0
        payload = 'SELECT task_id FROM task ORDER BY task_id'
        cursor.execute(payload)
        result = cursor.fetchall()
        for i in result:
            if i[0] >= tmp:
                tmp = i[0];
        connect.close()
    return tmp + 1;

def check_login(user, password):
    connect = get_connection()
    with connect.cursor() as cursor:
        payload = 'SELECT user_id FROM user WHERE username = \'' + user + '\' AND password = \'' + password + '\''
        cursor.execute(payload)
        result = cursor.fetchone()
        if result != None:
            return result[0]
        else:
            return "no_match"
    return

def add_user(user, password):
    connect = get_connection()
    if user_exists(user):
        return "user_err"
    else:
        user_id = get_new_id()
    if user_id > 126:
        return "other_err"
    try:
        with connect.cursor() as cursor:
            payload = 'INSERT INTO user(user_id, username, password) VALUES(' + str(user_id) + ',\'' + user + '\',\'' + password + '\')'
            cursor.execute(payload)
            connect.commit()
            connect.close()
    except Exception as e:
        print(e, file=sys.stderr)
    return "success"

def add_task(title, begin, end, status, uid):
    connect = get_connection()
    task_id = get_new_task_id()
    begin_dt = begin.split("T")
    end_dt = end.split("T")
    try:
        with connect.cursor() as cursor:
            payload_task = 'INSERT INTO task(task_id, title, begin, end, status) \
VALUES(' + str(task_id) + ',\'' + title + '\',\''+ begin_dt[0] + ' ' + begin_dt[1] + '\', \''+ end_dt[0] + ' ' + end_dt[1] + '\', \'' + status + '\')'
            cursor.execute(payload_task)
            connect.commit()
            payload_task_list = 'INSERT INTO user_has_task(fk_user_id, fk_task_id) VALUES(' + str(uid) + ', ' + str(task_id) + ')'
            cursor.execute(payload_task_list)
            connect.commit()
            connect.close()
    except Exception as e:
        print(e, file=sys.stderr)
    return "success"

def get_user_tasks(uid):
    try:
        connect = get_connection()
        tasks = []
        with connect.cursor() as cursor:
            payload = 'SELECT fk_task_id FROM user_has_task WHERE fk_user_id = \'' + str(uid) + '\''
            cursor.execute(payload)
            tids = cursor.fetchall()
            for i in tids:
                payload = 'SELECT * FROM task WHERE task_id = \'' + str(i[0]) + '\''
                cursor.execute(payload)
                tasks.append(cursor.fetchone())
            connect.close()
    except Exception as e:
        print(e, file=sys.stderr)
        return "other_err"
    return tasks

def del_task(uid, tid):
    try:
        connect = get_connection()
        with connect.cursor() as cursor:
            payload = 'SELECT * FROM user_has_task WHERE fk_user_id = ' + str(uid) + ' AND fk_task_id = ' + str(tid)
            cursor.execute(payload)
            result = cursor.fetchone()
            if result == None:
                connect.close()
                return "other_err"
            payload = 'DELETE FROM task WHERE task_id = ' + str(tid)
            cursor.execute(payload)
            connect.commit()
            payload = 'DELETE FROM user_has_task WHERE fk_task_id = ' + str(tid)
            cursor.execute(payload)
            connect.commit()
            connect.close()
    except Exception as e:
        print(e, file=sys.stderr)
        return "other_err"
    return "success"
