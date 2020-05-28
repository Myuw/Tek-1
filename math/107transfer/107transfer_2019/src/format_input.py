#!/usr/bin/env python3
##
## EPITECH PROJECT, 2020
## format_input.py
## File description:
## format_input.py
##

def format_input(str_input):
    str_input = str_input.split('*')
    return (list(reversed(str_input)))