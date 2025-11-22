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

    int jem = 0;

    cout << "Sanlar :  "<< endl;

    for (int i = 0; i <= a; i++) {
        jem += (a + i) * (a + i);
        if (i == 0) {
            cout << a << "^2 " << "+";

        }else if (i == a) {
            cout << "(2 * " << a << ")^2" << " = ";
        } else {
            cout << " ( " << a << " + " << i << " )^2 + " ;
        }
    }

    cout << jem << endl;

    return 0;
}