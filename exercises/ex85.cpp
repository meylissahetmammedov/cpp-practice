#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "N sanyny giriz:";
    cin >> n;

    if (n < 0 ) {
        cout << "Yalnys!! N > 0 bolmaly!" << endl;

        return 1;
    }



    double factorial = 1;
    cout << n<< "! = ";

    for (int i = 1; i <= n; i++) {
        factorial *= i ;

        cout << i ;
        if (i < n) cout << " * ";
    }
    cout << endl<< "Jobap" << " = " << factorial << endl;

    int pause ;
    cin >> pause;
    return 0;
}