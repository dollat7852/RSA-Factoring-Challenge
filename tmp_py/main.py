#!/usr/bin/python3


from os import fdopen
from re import I
from sys import argv
from math import sqrt

def main ():
    # total arguments
    with open(argv[1], 'r+') as f:
        lines = f.readlines()
    # print(lines[:-1])
    num_lines= [int(line) for line in lines[:-1]]
    print(num_lines)
    if (lines != None and len(lines) != 0):
        for num in num_lines:
            p, q = factors(num)
            print ("{}={}*{}".format(num,p,q))
            # is_prime(num, 2)
    else:
        print("no line read")

def is_prime(n, y):
    while (y <= sqrt(n)):
        if (n%y == 0):
            return (0)
        y= y+1
    print("{} is prime".format(n))
    return (1)

def factors(n):
    i = 2
    while (i <= n/2):
        if (n%i == 0):
            p = n/i
            q = i
            return(i, n)
        i+=1




main()