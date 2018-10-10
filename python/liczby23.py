#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  liczby23.py
#  

def liczby2():
    """
    Funkcja drukuje wszystkie liczby 2-cyfrowe, w których
    nie powtarzają się cyfry. Na koniec zwraca ilość takich samych liczb.
    Wykluczone liczby: 11, 22, 33 itd.
    """
    ile = 0 # licznik liczb
    for i in range(1, 10,): #pętla dzisiątek 
        for j in range (10): #pętla jedności
            if i != j:
              print ("{}{} ".format(i, j), end="")
              ile = ile + 1 #zliczanie liczb
    return ile


def main(args):
    print("\n\nLiczb 2-cyfrowych:", liczby2())
    return 0
    
def liczby3():
        """
    Funkcja drukuje wszystkie liczby 3-cyfrowe, w których
    nie powtarzają się cyfry. Na koniec zwraca ilość takich samych liczb.
    Wykluczone liczby: 111, 222, 333 itd.
    """

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
