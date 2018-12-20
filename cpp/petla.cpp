/*
 * petla.cpp
 */


#include <iostream>
using namespace std;
void cw1(){
int suma = 0;
for (int i = 10; i < 100; i++){
     if (i % 2 == 0)
     suma = suma + i;
   }
cout << suma <<endl;
}

int cw2(){
int x;
int y;
int z;
cout << "Wprowadź liczby: ";
    cin >> x;
    cin >> y;
    cin >> z;
while (x+y < z){
    cout << z;
    return 0;
   }
}


int main(int argc, char **argv)
{
	cw1();
    cw2();
	return 0;
}

