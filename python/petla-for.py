#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petla-for.py
  



def main(args):
    for i in range(101):
        if i % 2 == 0:
            print(i)
        else: 
            print("Liczba nieparzysta")       
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
