/*
 * szukaj_tab.cpp
 */


#include <iostream>
using namespace std;

int szukaj(int tab,int x,int n)
{ 
  for(int i = 0; i < n; i++)
  {
      if(tab[i] == x) 
      return i;
  }
      return -1;
}

int main(int argc, char **argv)

{
	int tab[10] = {12, 11, 8, 6, 7, 4, 10, 5, 2, 3};
    int x = 0;
    int n = 10;
    cout << "Podaj liczbę: ";
    cin >> x;
    int indeks = szukaj(tab, x, n);
    if (indeks > -1)
        cout << "znaleziono" <<indeks;
    else
        cout << "Nie znaleziono"<< indeks;
	return 0;
}

