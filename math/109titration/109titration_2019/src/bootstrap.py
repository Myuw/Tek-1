#!/usr/bin/env python3
##
## EPITECH PROJECT, 2020
## bootstrap.py
## File description:
## bootstrap.py
##

def compute_rate_of_change(x0, y0, x1, y1):
    return ((y1 - y0) / (x1 - x0))

def compute_derive_estimation(x0, y0, x1, y1, x2, y2):
    b = x1 - x0
    a = x2 - x1
    x = compute_rate_of_change(x1, y1, x0, y0)
    y = compute_rate_of_change(x2, y2, x1, y1)
    c = (((a * x) + (b * y)) / (a + b)) 
    return (c)

def compute_linear_approximation(x0, y0, x1, y1, x):
    return (((y0 * ((x1 - x) / (x1 - x0))) + (y1 * ((x - x0) / (x1 - x0)))))