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
            print("\t./107transfer [num den]*\n")
            print("DESCRIPTION")
            print("\tnum\tpolynomial numerator defined by its coefficients")
            print("\tden\tpolynomial denominator defined by its coefficients")
            return (0)
    return (1)
