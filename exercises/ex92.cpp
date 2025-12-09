#include <iostream>
using namespace std;

int main() {
    int n, k;

    cout << "N sany girizin N > K : ";
    cin >> n ;
    cout << "K sany girizin :";
    cin >> k ;

    if ( k <= 0 || n <= 0 ) {
        cout << "Yalnys!! N/K > 0 bolmaly!" << endl;
        return 1;
    }



    int pay = 0;
    int galyndy = n;

    cout << n << " / " << k << " bolemizde:" << endl;

    while (galyndy >= k) {
        int sonkygalyndy = galyndy;
        galyndy  = galyndy - k;
        pay++;

        cout << pay << ") ayranda: ";

        cout << ": " << sonkygalyndy << " - " << k;
        cout << " = " << galyndy << endl;

    }

    cout << "Payy: " << pay << endl;
    cout << "Galyndy san: " << galyndy << endl;



    int pause ;
    cin >> pause;
    return 0;
}