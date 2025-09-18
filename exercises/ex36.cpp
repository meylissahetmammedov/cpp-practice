#include <iostream>
using namespace std;

int main(){

    int n ;
    cout<< "Amaly girizin (1:kilogram, 2:milligram, 3:gram, 4:tonna, 5:sentner ): ";
    cin >>  n;

    double
    a;
    cout << "san girizmeli: ";
    cin >> a;

    double netije;

    switch (n) {
        case 1:
            netije = a * 1 ;
            cout <<  a << " kilogramda " << " = " << netije<< " kilogram bar "<<  endl;
            break;

        case 2:
            netije = a / 10000;
            cout << a << " milligramda " <<  " = " << netije<< " kilogram bar " << endl;
            break;

        case 3:
            netije = a / 1000;
            cout << a << " gram " <<  " = " << netije << " kilogram bar"<< endl;
            break;
        case 4:
            netije = a * 1000;
            cout << a << " millimetrda " <<  " = " << netije << " meter bar" << endl;
            break;
        case 5:
            netije = a * 50;
            cout << a << " sentner " <<  " = " << netije << " meter bar" << endl;
            break;
    }

    int pause;
    cin >> pause;

    return 0;
}