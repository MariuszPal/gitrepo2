/*
 * konwersje.cpp
 */


#include <iostream>
using namespace std;

void dec2any(int l, int p){
    int reszty[8];
    int i = 0;
    do {
       reszty[i]= l % p;
       l = l/p;
       i++;
    } while (l != 0); 
    
    
    while i-1 > -1
}

int main(int argc, char **argv)
{   
    int liczba = 0;
    int podstawa = 0;
    cout << "Podaj liczbę: ";
    cin >> liczba;
    cout << "Podaj podstawę: ";
    cin >> podstawa;
	dec2any(liczba, podstawa)
	return 0;
}

