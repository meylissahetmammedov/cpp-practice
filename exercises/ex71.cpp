#include <iostream>
using namespace std;
int main() {
    double suyjininBahasy;
    cout << "Suyjinin bahasyny giriz:";
    cin >> suyjininBahasy;

    if (suyjininBahasy <= 0) {
        cout << " (0 dan uly san girizmeli!!)" << endl;
        return 1;
    }


    // suyjinin  bahasyny 1.2--2kg cenli bahsyny capa cykarmaly
    for (double i = 1.2; i <= 2 ; i+=0.2) {
        cout << i << "kg suyjinin bahasy: " ;
        cout << suyjininBahasy * i  << "manat"<< endl;

    }
    cout << endl;



    return 0;
}