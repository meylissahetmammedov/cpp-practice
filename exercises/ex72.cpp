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

    int jem = 0;
    cout << "Sanlar: ";
    // A'dan B'sana  aralygyndaky sanlaryn jemini tapmaly
    for (int i = A; i<= B; i++) {
        cout << i ;
        jem+=i;
    }
    cout << endl;

    cout << "Sanlaryn jemi: " << jem << endl;

    return 0;
}