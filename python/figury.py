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
    
def prostokat2(a, b, znak):
    for i in range(a):
        for j in range(b):
            if j == 0 or j == b - 1:
                print(znak, end='')
            else:
                print(" ", end='')
        print()
    pass

def main(args):
    a = int(input("Podaj dlugosc 1 boku: "))
    b = int(input("Podaj dlugosc 2 boku: "))
    znak = input ("Podaj znak: ")
    prostokat1(a, b, znak)
    prostokat2(a, b, znak)
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
