#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  figury.py
#  


def prostokat1(a, b, znak):
    for i in range(a): #petla zewnętrzna
        for j in range(b): #petla wewnętrzna
            print(znak, end='')
        print() #znak końca lini
    pass
    
    
    
def prostokat2(a, b, znak, znak2):
    for i in range(a):
        for j in range(b):
            if j == 0 or j == b - 1  or i == 0 or i == a - 1:
                print(znak, end='')
            else:
                print(znak2, end='')
        print()
    pass
    
def choinka1(h, znak):
    for i in range(h):
    for j in range(c):
        print (znak)

def main(args):
    a = int(input("Podaj dlugosc 1 boku: "))
    b = int(input("Podaj dlugosc 2 boku: "))
    h = int(input("Podaj wysokosc choinki: "))
    c = int(input("Podaj dlugosc choinki: "))
    znak = input ("Podaj znak: ")
    znak2 = input ("Podaj znak2: ")
    prostokat1(a, b, znak)
    print(" ")
    prostokat2(a, b, znak, znak2)
    print()
    choinka1(h, znak):
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
