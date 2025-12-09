#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "A sany girizin (A < B): ";
    cin >> a ;
    cout << "B sany girizin (B > A):";
    cin >> b ;

    if (a >= b || a <= 0 || b <= 0 ) {
        cout << "Yalnys!! B > A > 0 bolmaly!" << endl;
        return 1;
    }


    b += 1;
    int gaytalanjaksan = 0 ;
    cout << "Jogap: "<< endl;

    for (int i = a; i <= b; i++) {
        gaytalanjaksan = i - a + 1;
        cout << i << " san " << gaytalanjaksan << " gezek : ";

        for (int j =1; j<= gaytalanjaksan; j++) {
            cout << i << " " ;

        }
        cout << endl;


    }


    int pause ;
    cin >> pause;
    return 0;
}