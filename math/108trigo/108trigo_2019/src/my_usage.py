#!/usr/bin/env python3
##
## EPITECH PROJECT, 2020
## my_usage.py
## File description:
## my_usage.py
##

import sys

def my_usage():
    if (len(sys.argv) == 2):
        if ("-h" == sys.argv[1]):
            print("USAGE")
            print("\t./108trigo fun a0 a1 a2 ...\n")
            print("DESCRIPTION")
            print('\tfun\tfunction to be applied, among at least "EXP", "COS", "SIN", "COSH" and "SINH"')
            print("\tai\tcoeficients of the matrix")
            return (0)
    return (1)
