#!/usr/bin/env python3
##
## EPITECH PROJECT, 2020
## my_error.py
## File description:
## my_error.py
##

import sys
import string

def my_str_isnum(arg):
    len_arg = len(arg)

    for i in range (len_arg):
        if ((arg[i] < '0' or arg[i] > '9') and arg[i] != '.'):
            print("Error: All arguments must be positive numbers", file=sys.stderr)
            return (84)
    return (0)

def my_error_logistic():
    n = int(sys.argv[1])
    k = float(sys.argv[2])

    if (n < 1):
        print("Error: n must be strictly positive", file=sys.stderr)
        return (84)
    if (k < 1 or k > 4):
        print("Error: k ∉ [1, 4]", file=sys.stderr)
        return (84)
    return (0)

def my_error_bifurcation():
    i0 = int(sys.argv[2])
    i1 = int(sys.argv[3])

    if i0 > i1:
        print("Error: i0 > i1, or i0 < i1", file=sys.stderr)
        return (84)
    return (0)

def my_error():
    len_arg = len(sys.argv)

    if (len_arg < 3):
        print("Error: Not enough arguments", file=sys.stderr)
        return (84)
    elif (len_arg > 4):
        print("Error: too many arguments", file=sys.stderr)
        return (84)
    for i in range (1, len_arg):
        if (my_str_isnum(sys.argv[i]) == 84):
            return (84)
    if (len_arg == 3):
        return (my_error_logistic())
    elif (len_arg == 4):
        return (my_error_bifurcation())