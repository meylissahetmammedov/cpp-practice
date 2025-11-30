#include <iostream>
using namespace std;
int main(){
    int yyl;

    cout << "Yyly giriz: ";
    cin >> yyl;

    bool artykYyl = false;


    if (yyl % 4 == 0) {
        if (yyl % 100 == 0) {

            if (yyl % 400 == 0) {
                artykYyl = true;
            }
        } else {

            artykYyl = true;
        }
    }

    if (artykYyl) {
        cout << yyl << "-nji yyl artyk yyl, 366 gun" << endl;
    } else {
        cout << yyl << "-nji yyl adaty yyl, 365 gun" << endl;
    }
    // girizen sanyn 365- 366 badygyny hasaplaya
    return 0;
}