/*
 * silnia.cpp
 */


#include <iostream>
using namespace std;

int silnia_re(int n) {
    if (n == 0)
        return 1;
    return silnia_re(n-1) * n;
    
}

int silnia_it(int n){
    int silnia = 1;
    for(int i = 1; i<=n ; i++ ){
    silnia = silnia * i;
    }
    return silnia;
}

int main(int argc, char **argv)
{
	int n = 4;
    cout << silnia_re(n) << endl;
    cout << silnia_it(n) << endl;
	return 0;
}

