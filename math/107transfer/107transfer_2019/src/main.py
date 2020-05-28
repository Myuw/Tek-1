#!/usr/bin/env python3
##
## EPITECH PROJECT, 2020
## main.py
## File description:
## main.py
##

import sys
import src.my_usage as usage
import src.format_input as fi
import src.compute_data as compute
import src.error_handling as error

def main():
    if (usage.my_usage() == 0):
        exit(0)
    if (error.my_error() == 84):
        exit(84)
    if (len(sys.argv) == 2):
        exit(compute.compute_data(fi.format_input(sys.argv[1]), 1))
    elif (len(sys.argv) == 3):
        exit(compute.compute_data(fi.format_input(sys.argv[1]),
        fi.format_input(sys.argv[2])))
    exit(0)