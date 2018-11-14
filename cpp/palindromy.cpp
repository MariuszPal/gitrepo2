/*
 * palindrom.cpp
 * kajak
 */


#include <iostream>
#include <string.h>

using namespace std;

bool palindrom (w[], int r){
    ;
    }

int main(int argc, char **argv)
{
	const int rozmiar = 20;
    char wyraz[20]; 
    cout << "Podaj wyraz lub zdanie: ";
    cin.getline(wyraz, rozmiar);
    //cout << cin.gcount() << endl;
    cout << strlen(wyraz) << endl;
    if (palindrom(wyraz, strlen (wyraz) )))
        cout << "Palindrom!";
    else 
        cout << "Nie palindrom!";
	return 0;
}


