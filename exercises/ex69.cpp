#include <iostream>
using namespace std;
int main() {
    double suyjininBahasy;
    cout << "Suyjinin bahasyny giriz:";
    cin >> suyjininBahasy;

    if (suyjininBahasy < 0) {
        cout << " (0 dan uly san girizmeli!!)" << endl;
        return 1;
    }


    // suyjinin  bahasyny 1--10kg cenli bahsyny capa cykarmaly
    for (int i = 1; i <=10 ; i++) {
        cout << i << "kg suyjinin bahasy: " ;
        cout << suyjininBahasy * i  << "manat"<< endl;

    }
    cout << endl;



    return 0;
}