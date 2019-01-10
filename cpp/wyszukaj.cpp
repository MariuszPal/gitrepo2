/*
 * wyszukaj.cpp
 */


#include <iostream>
using namespace std;


void wypelnij_los(int tab[], int roz) {
    srand(time(NULL));  // inicjacja generatora liczb pseudolosowych
    for(int i = 0; i < roz; i++) {
        tab[i] = rand() % 101;
    }
}

void drukuj(int tab[], int roz) {
    for(int i = 0; i < roz; i++) {
        cout << tab[i] << " ";
    }
}

void sort_insert (int tab[], int n) {
     int i, k, el;
     for (i = 1; i < n; i++){
         el = tab[i];
          k = i - 1 ;
          while (k>=0 && tab[k]> el){
              tab[k+1]= tab[k];
              k--;
        }
        tab[k+1] = el;
    }
}

int szukaj_lin(int tab[], int n, int szuk){
    for (int i = 0; i < n; i++)
         if (tab[i] == szuk)
            return i;
    return -1;
}

int wyszukaj_bin(int tab[], int n, int szuk) {



}

int main(int argc, char **argv)
{
	int n = 40;
    int tab[n];
    wypelnij_los(tab, n);
    drukuj(tab, n);
    int szuk = 0;
    int indeks;
    indeks = szukaj_lin(tab, n, szuk))
    cout <<"Podaj szukany element: "; cin >> szuk;
    if (indeks != -1)
        cout <<"Znaleziono";
    else
        cout <<"Nie znaleziono";
	return 0;
}

