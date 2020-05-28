#!/usr/bin/env python3
##
## EPITECH PROJECT, 2020
## logistic_map.py
## File description:
## logistic_map.py
##

def logistic_map(n, k):
    n = int(n)
    k = float(k)
    print(1, end=' ')
    print('%.2f'%n)
    for i in range (99):
        print(i + 2, end=' ')
        n = (k * n * ((1000 - n) / 1000))
        print('%.2f'%n)
