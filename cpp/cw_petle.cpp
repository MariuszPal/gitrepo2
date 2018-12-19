/*
 * cw_petle.cpp
 */


#include <iostream>
using namespace std;

void cw01 () {
    int i= 75;
    int x = 0;
    int m;
    while (x <= i){
         cout << "Podaj liczbę: ";
         cin >> m;
         x = x + m;
    }
    cout <<"suma liczb " ; cout << x<< endl;  
    
 }
void cw02() {
    int n;
    int m;
    cout << " Wprowadz 1 liczbe: ";
    cin >> n;
    cout << " Wprowadz 2 liczbe: ";
    cin >> m;
    for (int i = n;i <= m; i++){
        cout << i << endl; 
    }
}
void cw03() {
    int n;
    cout << " Wprowadz  liczbe: ";
    cin >> n;
    for (int i = 0; i <= n; i++ ){
     cout<< n*n << endl;
 
   }
}

int main(int argc, char **argv)
{
	cw01();
    
    cw02();
    
    cw03();
	return 0;
}

