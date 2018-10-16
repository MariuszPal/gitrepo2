#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  silnia.py
#  


def silnia_it(n):
    wynik = 1
    for liczba in range(1, n+1):
        wynik = wynik * liczba
        print (wynik)
    return wynik
    
def main(args):
    #n = int(input("podaj liczbe: "))
    #print(" {}! = {} ".format(n, silnia_it (n)))
    assert(silnia_it(0) == 1)
    assert(silnia_it(4) == 24)
    assert(silnia_it(10) == 3628800)
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
