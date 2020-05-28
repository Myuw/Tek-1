##
## EPITECH PROJECT, 2020
## my_error.py
## File description:
## my_error.py
##

import sys
from src import my_usage

def my_error(argv):
    if len(argv) < 2:
        sys.stderr.write("Error: Too few arguments\n")
        exit(84)
    elif len(argv) > 2:
        sys.stderr.write("Error: Too many arguments\n")
        exit(84)
    if argv[1] == "-h":
        my_usage.my_usage()
    if argv[1].isnumeric() == False:
        sys.stderr.write("Error: All arguments must be positive numbers\n")
        exit(84)