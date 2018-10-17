#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  euklides_nwd.py

def nwd1(a, b):
    while a != b:
        if a > b:
            a= a - b
        else:
            b= b - a
    return a

def main(args):
    a = int(input("Podaj 1 liczbe: "))
    b = int(input("Podaj 2 liczbe: "))
    print("NWW({},{}) = {}".format(a , b, nwd1(a, b)))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
