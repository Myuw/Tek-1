#!/usr/bin/env python3
##
## EPITECH PROJECT, 2020
## get_data.py
## File description:
## get_data.py
##

import csv

def get_data():
    values = []

    with open(r'values.csv') as csv_file:
        csv_reader = csv.reader(csv_file, delimiter= ';')
        for row in csv_reader:
            values.append(row)
        return (values)
