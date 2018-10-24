#include <iostream>

using namespace std;

int nwd_klasyczny(int a, int b) {

    while( a != b) {
         if(a > b)
             a = a - b;
         else
             b = b - a;
    }
    return a;
}


int main()
{
    int a, b;
    a = b = 0;
    cout << "Podaj dwie liczby: ";
    cin >> a >> b;
    cout << "NWD(" << a << ", " << b << ") = "
         << nwd_klasyczny(a, b) << endl;
    return 0;
}
