/*
 * wyszukaj.cpp
 */

#include <iostream>
using namespace std;

void wypelnij(int tab[], int roz) {
    srand(time(NULL)); // inicjacja generatora liczb pseudolosowych
    for(int i=0; i < roz; i++) {
        // cout << rand() << endl;
        tab[i] = rand() % 101;
    }
}

void drukuj(int tab[], int roz) {
    for(int i=0; i < roz; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;
}

void sort_insert(int tab[], int n) {
    int i, k, el;
    for (i = 1; i < n; i++) {
        el = tab[i];
        k = i-1; // indeks porównywanego elementu z części posortowanej
        while (k>=0 && tab[k]>el) {
            tab[k+1]=tab[k];
            k--;
        }
        tab[k+1]=el;
    }
}

int szukaj_lin(int tab[], int n, int szuk) {
    for (int i=0; i<n; i++)
        if (tab[i] == szuk)
            return i;
    return -1;
}

int wyszukaj_bin_it(int tab[], int n, int szuk) {
    int p, k, s; // p- początek k- koniec s - środek 
    p = 0;
    k = n -1;
    while (p <= k) {
        s = (p+k) / 2;
        if(tab[s] == szuk) return s;
        else if (szuk < tab[s]) k= s - 1;
        else p = s + 1;
    }
    return -1;
}

int main(int argc, char **argv)
{
    int n = 20;
    int tab[n];
    wypelnij(tab, n);
    drukuj(tab, n);
    int szuk = 0;
    cout << "Podaj szukany element: "; cin >> szuk;
    int indeks;
    //indeks = szukaj_lin(tab, n, szuk);
    sort_insert(tab, n);
    drukuj(tab, n);
    indeks = wyszukaj_bin_it(tab, n, szuk);
    cout << "\nIndeks: " << indeks << "\n";
    if (indeks != -1)
        cout << "Znaleziono";
    else
        cout << "Nie znaleziono";
    return 0;
}

