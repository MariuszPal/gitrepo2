#!/usr/bin/env python
# -*- coding: utf-8 -*-
#

def sumuj(a, b):
    
    return a + b
    
def roznica(a, b):

    return a - b
    
def iloczyn(a, b):
   
    return a * b
    
def iloraz(a, b):
    
    return a / b
    
    
def main(args):
    a = int(input("Podaj 1. liczbę: "))
    b = int(input("Podaj 2. liczbę: "))
   
    print(sumuj (a, b))
    print(roznica (a, b))
    print(iloczyn (a, b))
    print(iloraz (a, b))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
