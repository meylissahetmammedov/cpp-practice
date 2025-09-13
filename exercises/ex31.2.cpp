#include <iostream>
using namespace std;

int main(){

    short  san ;
    cout<< "1-5 araklyk san girizin: ";
    cin >> san;
    switch (san) {
        case 1:
            cout<< "aramaz";
            break;
        case 2:
            cout<< "kanagatlanarsyz";
            break;
        case 3:
            cout<< "kanagatlanarly";
            break;
        case 4:
            cout<< "yagsy";
            break;
        case 5:
            cout<< "oran yagsy";
            break;
        default:
            cout << "Yalnys!";
    }

    int pause;
    cin >> pause;

    return 0;
}