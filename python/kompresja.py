#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  kompresja.py
 
def wspolczynnik1(Vk, Vnk):
    return Vk/ Vnk * 100
    
def wspolczynnik1(Vk, Vnk):
   return (1 - Vk/ Vnk) * 100

def main(args):
    Vk = float(input('Rozmiar danych skompresowanych:  '))
    Vnk = float(input('Rozmiar danych skompresowanych:  '))
    print("Dane zmniejszyły się o: "), wspolczynnik1(Vk, Vnk))
    print ("Zaoszczędzone miejsce: "), wspolczynnik2(Vk, Vnk))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
