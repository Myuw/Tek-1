#!/usr/bin/env python3
##
## EPITECH PROJECT, 2020
## compte_data.py
## File description:
## compute_data.py
##

import sys
import numpy as np

def horner_method(input, x):
    result = float(0)
    len_input = int(len(input))

    result = (float(input[0]) * x)
    for i in range (len_input - 2):
        result = ((result + float(input[i + 1])) * x)
    return (result + float(input[len_input - 1]))

def compute_data(input_a, input_b):
    result_a = float(0)
    result_b = float(0)

    for i in np.arange (0.000, 1.001, 0.001):
        result_a = horner_method(input_a, i)
        result_b = horner_method(input_b, i)
        if (result_b == 0):
            print("Error: Divide by zero encountered", file=sys.stderr)
        result_a = result_a / result_b
        print('%.3f'%i, end=" -> ")
        print ("{0:.5f}".format(result_a))
    return (0)