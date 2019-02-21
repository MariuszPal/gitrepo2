/*
 * szykprzestawieniowy.cpp
 */


#include <iostream>
#include <string.h>
using namespace std;

#define MAKS 100
void szyfruj(char tb[],int klucz){
    int ile = strlen(tb);
    cout << ile<< endl;
    int reszta = ile % klucz;
    cout << reszta<< endl;
}

int main(int argc, char **argv)
{
    char tekst[MAKS];
    int klucz = 0;
    cout << "Podaj tekst: ";
    cin.getline(tekst, MAKS);
    cout << "Podaj klucz: ";
    cin >> klucz;
    szyfruj(tekst, klucz);
	return 0;
}

