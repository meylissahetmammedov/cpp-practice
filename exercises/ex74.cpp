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

    int jem = 0;
    cout << "Sanlar we kwadratlary  "<< endl;
    // A'dan B'sana  aralygyndaky sanlaryn kwadratlaryny  tapmaly ve kwadradlary jemini tapmaly
    for (int i = a; i <= b; i++) {
        int kwadrat = i * i ;
        cout << i << " ^2 = " << kwadrat << endl;
        jem += kwadrat ;
    }
    cout << endl;

    cout << "Kwadratlaryn jemi: " << jem << endl;

    return 0;
}
