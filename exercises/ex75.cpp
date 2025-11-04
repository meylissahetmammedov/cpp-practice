#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "A sanyny giriz:";
    cin >> a;

    if (a < 0 ) {
        cout << "Yalnys!! A > 0 bolmaly!" << endl;

        return 1;
    }

    double jem = 0;

    cout << "Sanlar :  "<< endl;
    //
    for (int i = 1; i <= a; i++) {
        jem += 1.0 / i;

        if (i > 1 && i < a) {
            cout << "1/" << i << " + ";
        } else if (i == 1) {
            cout << 1 << " + ";
        } else {
            cout << "1/" << i << " = ";
        }
    }

    cout << jem << endl;

    return 0;
}