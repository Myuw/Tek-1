##
## EPITECH PROJECT, 2020
## error_handling
## File description:
## 107transfer
##

import sys
import string

def str_isnum(arg):
    len_arg = len(arg)

    for i in range(len_arg):
        if ((arg[i] < '0' or arg[i] > '9') and arg[i] != '-'):
            print("Error: All arguments after second must be numbers", file=sys.stderr)
            return (84)
    return (0)

def str_istrigo(arg):
    if (arg == "EXP"):
        return (0);
    elif (arg == "COS"):
        return (0);
    elif (arg == "SIN"):
        return (0);
    elif (arg == "COSH"):
        return (0);
    elif (arg == "SINH"):
        return (0);
    print('Error: "EXP", "COS", "SIN", "COSH" or "SINH" for second argument expected ', file=sys.stderr)
    return (84);

def my_error():
    len_arg = len(sys.argv)

    if (len_arg < 3):
        print("Error: Not enough arguments", file=sys.stderr)
        return (84)
    if (str_istrigo(sys.argv[1]) == 84):
        return (84);
    for i in range (2, len_arg):
        if (str_isnum(sys.argv[i]) == 84):
            return (84)