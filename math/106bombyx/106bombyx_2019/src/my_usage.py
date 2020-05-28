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
            print("\t./106bombyx n [k | i0 i1]\n")
            print("DESCRIPTION")
            print("\tn\tnumber of first generation individuals")
            print("\tk\tgrowth rate from 1 to 4")
            print("\ti0\tinitial generation (included)")
            print("\ti1\tfinal generation (included)")
            return (0)
    return (1)
