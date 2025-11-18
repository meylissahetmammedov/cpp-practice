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


    int sum = 0;
    const int limit = 2 * n - 1;
    for (int i = 1; i <= limit; i+=2) {
        sum += i;
        if (i < limit) {
            cout << i << " + ";
        } else {
            cout << "(2 * " << n << " - 1)" << endl;
        }
    }



    int pause ;
    cin >> pause;
    return 0;
}