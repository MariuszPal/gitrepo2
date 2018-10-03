#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  suma-cyfr.py


def sumuj_cyfry1(m):
    suma = 0
    while  m > 0:
        suma = suma + (m % 10)
        m = int(m / 10)
    return suma

def main(args):
    m = int(input("Podaj 1. liczbę: "))
    while m < 10:
        print ("Błędne dane")
        m = int(input("Podaj 1. liczbę: "))
        
        print("suma:", sumuj_cyfry1(m))
 
if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
