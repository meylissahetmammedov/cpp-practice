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



    cout << "Jobap:  "<< endl;
    cout <<  n*n << " = " ;

    for (int i = 1; i <= n; i++) {
        int taksan = 2 * i -1;


        if (i == n ) {
            cout << "(2 * "<< n << " -1)";
        }else  {
            cout << taksan << " + ";
        }
    }



    int pause ;
    cin >> pause;
    return 0;
}