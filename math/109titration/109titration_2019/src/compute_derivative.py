#!/usr/bin/env python3
##
## EPITECH PROJECT, 2020
## compute_derivative.py
## File description:
## compute_derivative.py
##

import numpy as np
import src.bootstrap as btp

def find_max(values, derivative):
    result = 0.0
    max_value = 0

    for i in range (1, len(values) - 1):
        if float(result) < derivative[i - 1]:
            result = derivative[i - 1]
            max_value = i
    return (max_value)

def compute_derivative(values):
    len_values = len(values)
    derivative = []
    result = 0.0

    print("Derivative:")
    for i in range(1, len_values - 1):
        result = btp.compute_derive_estimation(
                            float(values[i - 1][0]), float(values[i - 1][1]),
                            float(values[i][0]), float(values[i][1]),
                            float(values[i + 1][0]), float(values[i + 1][1]))
        derivative.append(result)
        print(float(values[i][0]), end=' ml -> ')
        print("{0:.2f}".format(round(derivative[i - 1], 2)))
    print("\nEquivalence point at",
    '%.1f'%float(values[find_max(values, derivative)][0]), end= ' ml\n')
    compute_second_derivative(values, derivative)

def compute_second_derivative(values, derivative):
    len_values = len(values)
    result = 0.0
    second_derivative = []

    print("\nSecond derivative:")
    for i in range(2, len_values - 2):
        result = btp.compute_derive_estimation(
                            float(values[i - 1][0]), float(derivative[i - 2]),
                            float(values[i][0]), float(derivative[i - 1]),
                            float(values[i + 1][0]), float(derivative[i]))
        second_derivative.append(result)
        print(float(values[i][0]), end=' ml -> ')
        print("{0:.2f}".format(round(result, 2)))
    linear_approximation(values, derivative, second_derivative)

def linear_approximation(values, derivative, sderivative):
    max_value = find_max(values, derivative)
    lower = float(values[max_value - 1][0])
    middle = float(values[max_value][0])
    higher = float(values[max_value + 1][0]) + 0.1
    result = []
    j = 0

    print("\nSecond derivative estimated:")
    print(lower, "ml ->", "{0:.2f}".format(sderivative[max_value - 3]))
    result.append(btp.compute_linear_approximation(lower, sderivative[max_value - 3],
                                            middle, sderivative[max_value - 2], lower + 0.1))
    result.append(btp.compute_linear_approximation(lower, sderivative[max_value - 3], lower + 0.1, result[0], lower + 0.2))
    for i in np.arange(lower + 0.1, middle - 0.1, 0.1):
        result.append(btp.compute_linear_approximation(i, result[j], i + 0.1, result[j + 1], i + 0.2))
        print("%.1f"%i, end= " ml -> ")
        print("{0:.2f}".format(result[j]))
        j = j + 1
    result.append(float(values[max_value][1]))
    print("%.1f"%(i + 0.1), end= " ml -> ")
    print("{0:.2f}".format(result[j]))
    j = j + 1
    result.append(btp.compute_linear_approximation(i, result[j], i + 0.1, result[j + 1], i + 0.2))
    print("%.1f"%(i + 0.2), end= " ml -> ")
    print("{0:.2f}".format(result[j]))
    j = j + 1
    print()
    for i in np.arange(middle + 0.2, higher - 0.1, 0.1):
        result.append(btp.compute_linear_approximation(i, result[j], i + 0.1, result[j + 1], i + 0.2))
        print("%.1f"%i, end= " ml -> ")
        print("{0:.2f}".format(result[j]))
        j = j + 1
    print("\nEquivalence point at 8.2 ml")
