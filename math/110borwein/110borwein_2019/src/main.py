#!/usr/bin/env python3
##
## EPITECH PROJECT, 2020
## main.py
## File description:
## main.py
##

import sys
from src import my_error
from src import methods

def main():
    my_error.my_error(sys.argv)
    methods.midpoint_rule(int(sys.argv[1]))
    exit(0)