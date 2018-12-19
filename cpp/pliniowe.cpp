/*
 * pliniowe.cpp
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{   int n = 6;
    int szuk = 5;
	int tab[n + 1] = {1 , 4 , 7, 2, 9 , 5};
    tab[n] = szuk;
    int i = 0;
    while (tab[i] != szuk) i++;
    if (i < n)
       cout << "znaleziony";
    else
       cout << "Nie znaleziony";
	return 0;
}

