#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  szablon.py
#

def hello():
    print("Witaj , jestem Python!")


def witaj():
    imie = input("Jak masz na imię? ")
    print("Witaj", imie, "!" )

def suma (l1 , l2):
    print("Suma:",  l1 + l2)

    
def suma2 (a , b):
    """
    Funkcja sumuje dwie liczby i zwraza wynik
    """
    return a + b
    
def roznica (l1 , l2):
    print("Roznica:",  l1 - l2)
    
def iloczyn (l1 , l2):
    print("Iloczyn:",  l1 * l2)
    
def iloraz (l1 , l2):
    print("Iloraz:",  l1 / l2) 
    
def main(args):
    #zmienne o zasięgu lokalnym
    a = int(input("Podaj 1. liczbę: "))
    b = int(input("Podaj 2. liczbę: "))
    print (a)
    print (b)
    
    #suma(a, b)
    print("Suma: ", suma2(a, b) )
    roznica(a, b)
    iloczyn(a, b)
    iloraz(a, b)

    #print("Roznica: ", a - b )
    #print("Iloczyn: ", a * b )
    #print("Iloraz: ", a / b )
   
    hello () #wywołanie funkcji
    witaj ()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
