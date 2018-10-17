#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  tabliczka.py

def tabliczka(m , n):
    for i in range(1, m + 1):
        for j in range(1 , n + 1):
            print("{:>4}".format(i * j), " ", end= '')
        print()
        
def main(args):
    m = int(input("Podaj 1 liczbe: "))
    n = int(input("Podaj 2 liczbe: "))
    tabliczka(m, n)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
