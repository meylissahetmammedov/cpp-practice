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
    // A'dan B'sana  aralygyndaky sanlary kemelyan sekilde  capa cykarmaly we opsy nace san capa cykarlanyly capa cykarmaly
    for (int i = B; i > A; i--) {
        cout << i ;

    }
    cout << endl;
    cout << "Sanlaryn sany: " << B-A << endl;

    return 0;
}