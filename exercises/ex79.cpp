#include <iostream>
using namespace std;
int main() {
    int n, a;
    cout << "A kwadratda islenmeli san:";
    cin >> a;
    cout << "N kwadratda ulanmaly san:";
    cin >> n;

    if (n < 0 ) {
        cout << "Yalnys!! N > 0 bolmaly!" << endl;

        return 1;
    }


    int netije =1;
    cout << "Jobap:  "<< endl;
    cout <<  a << "^" << n <<" = " ;

    for (int i = 1; i <= n; i++) {
        netije *= a ;

        cout << a ;
        if (i == n) {
            cout << " = " << netije ;
        }else if (i < n ){
            cout << " * "  ;
        }

    }
    
    int pause ;
    cin >> pause;
    return 0;
}