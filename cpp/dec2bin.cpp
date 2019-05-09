/*
 *dec2bin.cpp
 * 
 */

#include <iostream>
#include <cmath>

using namespace std;

int cyfry[16] = {0,1,2,3,4,5,6,7,8,9,65,66,67,68,69,70};

int dec2any(int liczba, int podstawa, int tab[]) {
    int i=0;
    do {
        tab[i] = liczba % podstawa;
        liczba = liczba / podstawa;
        i++;
    } while (liczba != 0);
    return i-1;
}


int main(int argc, char **argv)
{
    int tab[8];
    int liczba, podstawa;
    cout << "Podaj liczbę i podstawę systemu docelowego:\n";
    cin >> liczba >> podstawa;
    int i = dec2any(liczba, podstawa, tab);
    cout << "Wynik: ";
    while (i > -1) {
        if (podstawa > 10 && tab[i] > 10)
            cout << (char)cyfry[tab[i]];
        else
            cout << tab[i];
        i--;
    }
    cout << endl;
    //any2dec(tab);
    return 0;
}
