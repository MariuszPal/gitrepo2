/*
 * sortowanie.cpp
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

void zamien1(int &a, int &b) { // void nie ma return i nic nie zwraca 
    //cout << a << " "<< b <<endl;    
    int tmp = a;  // zmienna pomocnicza
    a = b;
    b = tmp;
    //cout << a << " "<< b <<endl;
}

void zamien2(int tab[], int i) {
    int tmp = tab[i];
    tab[i] = tab[i+1];
    tab[i+1] = tmp;
}

void sort_bubble(int tab[], int n) {
    for (int j = n-1; j > 0; j--) {
        for (int i = 0; i < j; i++) {
            if (tab[i]> tab[i + 1])
                zamien1(tab[i], tab[i + 1]);
        }
    }
}

//void sort_insert(int tab[], int n) {
    //cout << "\nSortowanie przez wstawianie\n";
    //int i, j, tmp;
    //for (i = 1; i < n; i++) { // pętla wybiera kolejne elementy zaczynając od drugiego
        //tmp = tab[i];
        //j = i - 1; // 0
        //while (j >= 0 && tab[j] > tmp) {
            //tab[j+1] = tab[j];
            //j--;
        //}
        //tab[j+1] = tmp;
    //}
//}
void sort_selection (int tab[], int n) {
     int i, j, k;
     for (i = 0; i < n; i++){
          k = i; // indeks najmniejszego elementu
          for (j = i + 1; j < n; j++){
              if (tab[j] < tab[k])
                  k = j;
        }
        zamien1(tab[i], tab[k]);
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


int main(int argc, char **argv)
{
    int roz = 20;
    int tab[roz];
    wypelnij_los(tab, roz);
    drukuj(tab, roz);
    cout << endl << endl;
    //sort_bubble(tab, roz);
    sort_selection(tab, roz);
    drukuj(tab, roz);
    cout << endl;
    //int a = 10;
    //int b = 20;
    //zamien(a, b);
    //cout << a << " " << b;
    cout << endl;
    sort_insert(tab, roz);
    drukuj(tab, roz);
    return 0;
}
