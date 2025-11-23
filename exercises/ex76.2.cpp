#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "N sanyny giriz:";
    cin >> n;

    if (n < 0 ) {
        cout << "Yalnys!! A > 0 bolmaly!" << endl;

        return 1;
    }

    int jem = 0;

    cout << "Sanlar :  "<< endl;

    for (int i = 0; i <= n; i++) {
        jem += (n + i) * (n + i);

        if (i == 0) {
            cout << n << "^2 + ";
        } else if (i == n) {
            cout << "(" << 2 << "*" << n << ")^2 = ";
        } else {
            cout << "(" << n << " + " << i << ")^2 + ";
        }
    }

    cout << jem << endl;

    return 0;
}