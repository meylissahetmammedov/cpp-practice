#include <iostream>
using namespace std;
int main() {
    int n  ;
    cout << "N sanyny giriz:";
    cin >> n;


    if (n < 0 ) {
        cout << "Yalnys!! N > 0 bolmaly!" << endl;

        return 1;
    }


    int jem = 0 ;
    cout << "Mesele: ";

    for (int i = 1; i <= n; i++) {
        int dereje = 1;
        for (int j = 1; j <= i; j++) {
            dereje *= i;
        }
        jem += dereje;
        if (i == n) {
            cout << n << "^" << n;
        }else {
            cout << i << "^" << i << " + " ;
        }


    }
    cout << endl<< "Jogap" << " = " << jem << endl;

    int pause ;
    cin >> pause;
    return 0;
}