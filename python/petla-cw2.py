#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petla-cw2.py



def main(args):
    return 0
    
    n = int(input("Podaj n: "))
    m = int(input("Podaj m: "))
    for liczba in range(n, m+1):
        print (liczba, "", end="")
if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
