#!/usr/bin/env python3
##
## EPITECH PROJECT, 2020
## __init__.py
## File description:
## app
##

from flask import Flask
import os

app = Flask(__name__)
app.config.from_object('config')
app.secret_key = os.urandom(16)

from app import controller
