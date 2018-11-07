/*
 * znaki.cpp
 */


#include <iostream>
using namespace std;
int zlicz(char tab[]){
    int i = 0; // indeks znaków w tablicy
    //int ile = 0; // licznik znaków
    while (tab [i] != '\0'){ 
    //ile++;
    i++;
}
    //return ile;
    return i;
}

  void drukuj(char tab[], int roz) {
     for (int i = 0; i<roz; i++) {
          cout << tab[i] << " ";
     }
 }

void liczznaki(char tab[], int roz){
    int spacje = 0;
    int interpunkcja = 0;
    for (int i = 0; i<roz; i++){
         if (tab[i] == ' ') spacje++;
         else if (tab[i]== '.' || tab [i] == ',')
              interpunkcja++;
         }
    }

int main(int argc, char **argv)
{
	const int rozmiar = 20;
    char tab[rozmiar]; 
    cout << "Jak się nazywasz" << endl;
    //cin >> tab;
    cin.getline (tab, rozmiar);
    //cout << "Cześć " << tab << "!" << endl;
    drukuj(tab, zlicz(tab));
    
	return 0;
}

