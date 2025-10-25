#include <iostream>
using namespace std;

int main() {
    cout << "A we B sanlaryny girizin (A < B)"<< endl;

    int A;
    cout << "A sanyny giriz:";
    cin >> A;
    int B;
    cout << "B sanyny giriz:";
    cin >>  B;

    if (A >= B) {
        cout << " A < B bolmaly!" << endl;
        return 1;
    }


    cout << "Sanlar: ";
    // A'dan B'sana  aralygyndaky sanlary capa cykarmaly we opsy nace san capa cykarlanyly capa cykarmaly
    for (int i = A; i <= B; i++) {
        cout << i ;

    }
    cout << endl;

    cout << "Sanlaryn sany: " << B-A+1 << endl;

    return 0;
}