#!/usr/bin/env python3
##
## EPITECH PROJECT, 2020
## main.py
## File description:
## main.py
##

import sys
import src.my_usage as usage
import src.get_data as data
import src.compute_derivative as cmpt

def main():
    if (len(sys.argv) == 2 and sys.argv[1] == "-h"):
        usage.my_usage()
    values = data.get_data()
    cmpt.compute_derivative(values)
    exit(0)
