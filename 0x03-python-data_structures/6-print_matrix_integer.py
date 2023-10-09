#!/usr/bin/python3

def print_matrix_integer(matrix=[[]]):
    """print a matrix of integers"""
    for row in matrix:
        for num in row:
            print("{:d}".format(num), end= " " if num != row[-1] else "")
            print()
