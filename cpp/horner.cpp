/*
 * horner.cpp
 * 
 * W(x)= 2x^3 + 3x^2 + 5x + 4 => 6
 * W(x)= x (2x^2 + 3x + 5) + 4
 * W(X)= x (x(2x+3) + 5) + 4 => 3
 */


#include <iostream>
using namespace std;

void drukujw(int stopień, float tbwsp[]){
    //3x^2 + 4x^2 + 5x + 1
    pętla for;
    }

int main(int argc, char **argv)
{
    float *tbwsp; // wskaźnik
    int stopien = 0;
	cout << "Podaj stopień wielomianu: ";
    cin >> stopien;
    tbwsp = new float [stopien + 1];
    cout << tbwsp;
    for (int i=0; i <= stopien; i++){
         cout << "Podaj współczynnik przy potędze " << stopien-i << ":";
         cin >> tbwsp[i];
        }
    cout << "Podaj argument: ";
    cin >> x;
    
    cout << "Wartość wielimianu o postaci: "
    drukujw(stopien, tbwsp);
	return 0;
}

