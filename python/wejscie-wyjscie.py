#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  szablon.py
#

def main(args):
    a = int(input("Podaj 1. liczbę: "))
    b = int(input("Podaj 2. liczbę: "))
    print(a)
    print (b)
    
    print("Suma: ", a + b )
    print("Roznica: ", a - b )
    print("Iloczyn: ", a * b )
    print("Iloraz: ", a / b )
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
