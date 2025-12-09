#include <iostream>
using namespace std;
int main() {
    int n, a;
    cout << "A sanyny giriz:";
    cin >> a;
    cout << "N sanyny giriz:";
    cin >> n;

    if (n < 0 ) {
        cout << "Yalnys!! N > 0 bolmaly!" << endl;

        return 1;
    }


    int kopeltmek =1;
    int jem = 1;
    cout << "Jobap:  "<< endl;

    for (int i = 1; i <= n; i++) {
        kopeltmek *= a ;
        jem += kopeltmek;

        if ( i == 1) {
            cout << " 1 + "<< a;
        } else {
            cout <<" + " <<a << "^"<< i ;
        }



    }
    cout <<" = "<< jem << endl;

    int pause ;
    cin >> pause;
    return 0;
}