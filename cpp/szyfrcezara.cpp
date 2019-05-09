/*
 * szyfrcezara.cpp
 */

#include <iostream>
using namespace std;

#define MAKS 100


void szyfruj(char tb[], int klucz) {
    klucz = klucz % 26;
    int kod = 0;
    int i = 0;
    while(tb[i] != '\0') {
        if (tb[i] == ' ') cout << tb[i];
        else {
            kod = (int)tb[i];
            if (kod < 91) {
                kod += klucz;
                if (kod > 90)
                    kod -= 26;
            } else {
                kod += klucz;
                if (kod > 122)
                    kod -= 26;
            }
            cout << (char)kod;
        }
        i++;
    }
}


int main(int argc, char **argv) {
    char tekst[MAKS];
    int klucz = 0;
    cout << "Podaj tekst:\n";
    cin.getline(tekst, MAKS);
    cout << "Podaj klucz:\n";
    cin >> klucz;
    szyfruj(tekst, klucz);
    
    return 0;
}
