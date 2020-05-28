#!/usr/bin/env python3
##
## EPITECH PROJECT, 2020
## view.py
## File description:
## here there should be only functions doing front end I guess
##

from flask import render_template, jsonify

def show_home():
    return render_template('index.html')

def show_task_view(username):
    return render_template('task_view.html', greeting=username)

def generate_tasks(tasks_list):
    tasks = []
    for i in tasks_list:
        task_underlay = {"title":i[1], "begin":i[2], "end":i[3], "status":i[4]}
        task_overlay = {i[0]:task_underlay}
        tasks.append(task_overlay)
    tasks_overlay = {"tasks":tasks}
    payload = {'result':tasks_overlay}
    return jsonify(payload)
