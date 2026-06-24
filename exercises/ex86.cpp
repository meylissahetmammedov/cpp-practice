#include <iostream>
using namespace std;
int main() {
    int n , k;
    cout << "N sanyny giriz:";
    cin >> n;
    cout << "K sanyny giriz: ";
    cin >> k;

    if (n < 0 ) {
        cout << "Yalnys!! N > 0 bolmaly!" << endl;

        return 1;
    }


    int jem = 0 ;
    cout << "Mesele: ";

    for (int i = 1; i <= n; i++) {
        int dereje = 1;
        for (int j = 1; j <= k; j++) {
            dereje *= i;
        }
        jem += dereje;
        if (i == n) {
            cout << n << "^" << k;
        }else {
            cout << i << "^" << k << " + " ;
        }


    }
    cout << endl<< "Jogap" << " = " << jem << endl;

    int pause ;
    cin >> pause;
    return 0;
}