#include <iostream>
using namespace std;

int main(){

    int n ;
    cout<< "Amaly girizin (1:desimetr, 2:kilometr, 3:meter, 4:millimetr, 5:santimetr ) ";
    cin >>  n;

    double
    a;
    cout << "san girizmeli: ";
    cin >> a;

    double netije;

    switch (n) {
        case 1:
            netije = a / 10 ;
            cout <<  a << " desimetrda " << " = " << netije<< " meter bar "<<  endl;
            break;

        case 2:
            netije = a * 1000;
            cout << a << " kilometrinda " <<  " = " << netije<< " meter bar " << endl;
            break;

        case 3:
            netije = a * 1;
            cout << a << " meterda " <<  " = " << netije << " meter bar"<< endl;
            break;
        case 4:
            netije = a / 1000;
            cout << a << " millimetrda " <<  " = " << netije << " meter bar" << endl;
            break;
        case 5:
            netije = a / 100;
            cout << a << " santimetrda " <<  " = " << netije << " meter bar" << endl;
            break;

    }

    int pause;
    cin >> pause;

    return 0;
}