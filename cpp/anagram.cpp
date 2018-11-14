/*
 * znaki.cpp
 */


#include <iostream>
using namespace std;

void anagramy(char w[], int r) {
    int i1, i2, i3, i4;
    i1 = i2 = i3 = i4 = 0;
    
    for ( i1 = 0; i1 < r ; i1++) {
        for (i2 = 0; i2 < r; i2++) {
            if (i1 == i2) continue;
            for (i3=0; i3 < r; i3++){
                if (i1 == i3 || i2 == i3) continue;
                i4 = 6 - (i1 + i2 + i3);
                cout << w[i1] << w[i2] << w[i3] << w[i4] << endl;
      }
    }
  }
}

int main(int argc, char **argv)
{
	const int rozmiar = 4;
    char wyraz[] = "ryba"; // 4! = 1 * 2 * 3 * 4 = 24 
    anagramy(wyraz, rozmiar);
	return 0;
}


