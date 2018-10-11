#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  potega.py
#  


def potega_it(a, n):
    wynik = 1
    pass
    for i in range(n):
        wynik= wynik * a
        print(wynik)
    return wynik
    
def main(args):
    a, n = 3 , 4
    print("Potęga {} do {} wynosi".format(a, n, potega_it (a, n)))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
