#!/usr/bin/env python3
##
## EPITECH PROJECT, 2020
## main.py
## File description:
## main.py
##

import sys
import src.my_usage as usage
import src.my_error as error
import src.logistic_map as lm
import src.bifurcation_diagram as bd

def main():
    if (usage.my_usage() == 0):
        exit(0)
    if (error.my_error() == 84):
        exit(84)
    if (len(sys.argv) == 3):
        lm.logistic_map(sys.argv[1], sys.argv[2])
    elif (len(sys.argv) == 4):
        bd.bifurcation_diagram(sys.argv[1], sys.argv[2], sys.argv[3])
    exit(0)
