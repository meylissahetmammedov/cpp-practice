#include <iostream>
using namespace std;
int main() {
    int n ;

    cout << "N sany girizin N > K : ";
    cin >> n ;

    if ( n <= 0 ) {
        cout << "Yalnys!! N/K > 0 bolmaly!" << endl;
        return 1;
    }


    while (n % 3 == 0) {
        n/= 3;
    }

    if (n == 1) {
        cout << "True";
    } else {
        cout << "False";
    }

    int pause ;
    cin >> pause;
    return 0;
}