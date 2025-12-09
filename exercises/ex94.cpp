#include <iostream>
using namespace std;
int main() {
    int n ;

    cout << "N sany girizin (N > 0): ";
    cin >> n ;

    if ( n <= 0 ) {
        cout << "Yalnys!! N > 0 bolmaly!" << endl;
        return 1;
    }


    int k = 0;
    int dereje = n;

    while (dereje > 1) {
        if (dereje % 2 != 0) {
            cout << "Yalnys: " << n << " san 2-nin derejesi dal!" << endl;
            return 1;
        }
        dereje /= 2;
        k++;
    }

    cout << n << " = 2^" << k << endl;
    cout << "2  = " << k << " -njy derejsi"<< endl;


    int pause ;
    cin >> pause;
    return 0;
}