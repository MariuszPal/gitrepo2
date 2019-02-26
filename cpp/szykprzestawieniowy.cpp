/*
 * szykprzestawieniowy.cpp
 */


#include <iostream>
#include <string.h>
using namespace std;

void drukuj(char tab[], int roz) {
    for (int i = 0; i<roz; i++){
      cout << tab[i] << " ";
    }
}

void deszyfruj(char tb[], int klucz){
    
}

#define MAKS 100
void szyfruj(char tb[],int klucz){
    int ile = strlen(tb);
    cout << ile<< endl;
    int reszta = ile % klucz;
    int i=0;
    if (reszta > 0)
    for(i = 0; i < klucz-reszta; i++){
        tb[ile + i] = '.';
    }
    tb[ile+i]= '\0';
    drukuj(tb);
    ile = strlen(tb);
    for (i=0; i < ile/klucz; i++) {
        for(int j=i; j< ile; j = j + klucz)
           cout << tb[j];
    }
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

