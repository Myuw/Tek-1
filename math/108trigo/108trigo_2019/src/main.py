#!/usr/bin/env python3
##
## EPITECH PROJECT, 2020
## main.py
## File description:
## main.py
##

import sys
import src.error_handling as error
import src.my_usage as usage

def main():
    if (usage.my_usage() == 0):
        exit(0)
    if (error.my_error() == 84):
        exit(84)
    exit(0)