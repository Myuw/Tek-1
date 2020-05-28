#!/usr/bin/env python3
##
## EPITECH PROJECT, 2020
## controller.py
## File description:
## here we should have all routes I guess
##

import sys
from app import app, models as model
from app import views as view
from flask import request, jsonify, session

def is_user_connected():
    if session.get('uid') != None:
        return True
    else:
        return False

@app.route('/', methods=['GET'])
def route_home():
    if is_user_connected():
        return "already logged in!"
    return view.show_home()

@app.route('/tasks', methods=['GET'])
def route_task_view():
    if not(is_user_connected()):
        return "not logged in!"
    return view.show_task_view(model.get_user_by_id(str(session.get('uid'))))

@app.route('/signin', methods=['POST'])
def route_signin_user():
    json = request.get_json()
    user_id = model.check_login(json['username'], json['password'])
    if user_id == "no_match":
        return jsonify(error="login or password does not match")
    if user_id == "other_err" or session.get('uid') != None:
        return jsonify(error="internal error")
    session['uid'] = user_id
    return jsonify(result="signin successful")

@app.route('/register', methods=['POST'])
def route_add_user():
    json = request.get_json()
    storage = model.add_user(json['username'], json['password'])
    if storage != "success":
        if storage == "user_err":
            return jsonify(error="account already exists")
        if storage == "other_err":
            return jsonify(error="internal error")
    else:
        return jsonify(result="account created")

@app.route('/signout', methods=['POST'])
def route_signout_user():
    if not(is_user_connected()):
        return jsonify(error="you must be logged in")
    else:
        session.clear()
        return jsonify(result="signout successful")

@app.route('/user/task/add', methods=['POST'])
def route_add_task():
    if is_user_connected():
        json = request.get_json()
        storage = model.add_task(json['title'], json['begin'], json['end'], json['status'], session['uid'])
        if storage == "other_err":
            return jsonify(error="internal error")
        return jsonify(result="new task added")
    else:
        return jsonify(error="you must be logged in")

@app.route('/user/task/del/<int:tid>', methods=['POST'])
def route_delete_task(tid):
    if is_user_connected():
        storage = model.del_task(int(session['uid']), int(tid))
        if storage == "other_err":
            return jsonify(error="internal error")
        elif storage == "success":
            return jsonify(result="task deleted")
    else:
        return jsonify(error="you must be logged in")

@app.route('/user/task', methods=['GET'])
def route_user_tasks():
    if is_user_connected():
        storage = model.get_user_tasks(session.get('uid'))
        if storage == "other_err":
            return jsonify(error="internal error")
        else:
            return view.generate_tasks(storage)
    else:
        return jsonify(error="you must be logged in")
