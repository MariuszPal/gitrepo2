/*
 * szykprzestawieniowy.cpp
 */
#include <iostream>
#include <string.h>
using namespace std;

#define MAKS 100
void drukuj(char t[]) {
    int i = 0;
    while(t[i] != '\0'){
        cout << t[i];
        i++;
    } 
}

void deszyfruj(char tb[], int klucz) {
    ;
}

void szyfruj(char tb[], int klucz){
    int ile = strlen(tb);
    cout << ile << endl;
    int reszta = ile % klucz;
    int i = 0;
    if (reszta > 0)
        for(i = 0; i < klucz-reszta; i++) {
            tb[ile+i] = '.';
        }
    tb[ile+i]='\0';
    drukuj(tb);
    ile = strlen(tb);
    cout << endl;
    for(i=0; i < klucz; i++) {
        for(int j=i; j < ile; j += klucz) {
            cout << tb[j];
        }
    }
}

int main(int argc, char **argv)
{
    char tekst[MAKS];
    int klucz = 0;

    cout << "Podaj tekst:\n";
    cin.getline(tekst, MAKS);
    cout << "Podaj klucz: ";
    cin >> klucz;
    szyfruj(tekst, klucz);
    return 0;
}
