#!/usr/bin/env python3
##
## EPITECH PROJECT, 2020
## methods.py
## File description:
## methods.py
##

import math

def borwein_integral(n, x):
    result = 1

    if x == 0:
        return 1
    for k in range(n + 1):
        result *= math.sin(x / ((2 * k) + 1)) / (x / ((2 * k) + 1))
    return result

def midpoint_rule(n):
    a = 0
    b = 0.5
    result = 0

    print("Midpoint:")
    for i in range(10000):
        result = result + borwein_integral(n, (a + b) / 2)
        a = b
        b = b + 0.5
    result = result * 0.5
    print("I", n, " = {0:.10f}".format(result), sep="")
    print("diff = {0:.10f}".format(abs(result - math.pi / 2)))
    trapezoidal_rule(n)

def trapezoidal_rule(n):
    a = 0
    b = 0.5
    result = 0

    print("\nTrapezoidal:")
    for i in range(10000):
        result = result + (0.5 * (borwein_integral(n, a) + borwein_integral(n, b)))
        a = b
        b = b + 0.5
    result = result * 0.5
    print("I", n, " = {0:.10f}".format(result), sep="")
    print("diff = {0:.10f}".format(abs(result - math.pi / 2)))
    simpson_rule(n)

def simpson_rule(n):
    a = 0
    b = 0.5
    result = 0

    print("\nSimpson:")
    for i in range(10000):
        result = result + (0.5 / 6) * (borwein_integral(n, a) + borwein_integral(n, b) + (4 * borwein_integral(n, (a + b) / 2)))
        a = b
        b = b + 0.5
    print("I", n, " = {0:.10f}".format(result), sep="")
    print("diff = {0:.10f}".format(abs(result - math.pi / 2)))
