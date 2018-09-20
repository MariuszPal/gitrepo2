#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  abc.py
#  
  


def main(args):
     a = int(input("Podaj 1. liczbę: "))
     b = int(input("Podaj 2. liczbę: "))
     c = int(input("Podaj 3. liczbę: "))
     if a > b:
         if a > c:
             print ("Maks: ", a)
         else:
             print("Maks: ", c)
     return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
