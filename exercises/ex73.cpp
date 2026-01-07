#include <iostream>
using namespace std;
int main() {
    cout << "A we B sanlaryny girizin (A < B)"<< endl;

    int a;
    cout << "A sanyny giriz:";
    cin >> a;
    int b;
    cout << "B sanyny giriz:";
    cin >>  b;

    if (a >= b) {
        cout << " A < B bolmaly!" << endl;
        return 1;
    }

    int jem = 1;
    cout << "Sanlar: ";
    // A'dan B'sana  aralygyndaky sanlaryn kopeltmek hasylyny tapmaly
    for (int i = a; i <= b; i++) {
        cout << i << " ";
        jem = jem * i;
    }
    cout << endl;


    cout << "Sanlaryn jemi: " << jem << endl;

    return 0;
}