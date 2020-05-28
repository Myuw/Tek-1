##
## EPITECH PROJECT, 2020
## error_handling
## File description:
## 107transfer
##

import sys
import string

def my_str_isnum(arg):
    len_arg = len(arg)

    for i in range (len_arg):
        if ((arg[i] < '0' or arg[i] > '9') and arg[i] != '*' and arg[i] != '-'):
            print("Error: All arguments must be numbers, separated by *", file=sys.stderr)
            return (84)
        if (i > 1 and arg[i] == '-' and arg[i - 1] != '*'):
            print("Error: Misplaced -", file=sys.stderr)
            return (84)
        if (arg[len_arg - 1] == '*'):
            print("Error: End of string shouldn't be *", file=sys.stderr)
            return (84)
        if (((len_arg - 1) % 2) != 0):
            print("Error: Total of argument must be an even number")
            return (84);
    return (0)

def my_error():
    len_arg = len(sys.argv)

    if (len_arg < 2):
        print("Error: Not enough arguments", file=sys.stderr)
        return (84)
    for i in range (1, len_arg):
        if (my_str_isnum(sys.argv[i]) == 84):
            return (84)