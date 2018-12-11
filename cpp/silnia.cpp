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

int main(int argc, char **argv)
{
	int = 10;
    cout << silnia_re(n) << endl;
	return 0;
}

