/*
 * konwersje.cpp
 */


#include <iostream>
using namespace std;

int cyfry[16] = {0 ,1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,65 ,66 ,67 ,68 ,69 ,70 };
// (char)65

void dec2any(int l, int p){
    int reszty[8];
    int i = 0;
    do {
       reszty[i]= l % p;
       l = l/p;
       i++;
    } while (l != 0); 
    
    
    while (i-1 > -1){
          if (reszty[i-1] > 10)
          cout << (char)cyfry[reszty[i-1]];
          else
              cout << reszty[i-1];
          i--;
    }
    cout << endl;
}
void any2dec() {
    char  liczba[9];
    int podstawa = 0;
    cout << "Podstawa [2-16]?";
    cin >> podstawa;
    
    cout << "Liczba?";
    cin.getline(liczba, 8);
    
    
    int i = 0;
    while(liczba[i] != '\0') {
        cout << liczba[i];
        i++;
    }
}

int main(int argc, char **argv)
{   
    int liczba = 0;
    int podstawa = 0;
    cout << "Podaj liczbę: ";
    cin >> liczba;
    cout << "Podaj podstawę: ";
    cin >> podstawa;
	dec2any(liczba, podstawa);
	return 0;
}

