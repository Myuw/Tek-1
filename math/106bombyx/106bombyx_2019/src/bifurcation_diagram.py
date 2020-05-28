#!/usr/bin/env python3
##
## EPITECH PROJECT, 2020
## bifurcation_diagram.py
## File description:
## bifurcation_diagram.py
##

def bifurcation_diagram(n, i0, i1):
    k = 1
    tmp = n
    tmp = int(tmp)
    k = float(k)
    n = int(n)
    i0 = int(i0)
    i1 = int(i1)

    while k <= 4:
        tmp = n
        for j in range (i0 + 1):
            tmp = (k * tmp * ((1000 - tmp) / 1000))
        for i in range (i1 - i0 + 1):
            print('%.2f'%k, end=' ')
            print('%.2f'%tmp)
            tmp = (tmp * k *((1000 - tmp) / 1000))
        k = k + 0.01
