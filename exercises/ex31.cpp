#include <iostream>
using namespace std;

int main(){

    int san {};
    cout<< "1-5 araklyk san girizin: ";
    cin >> san;

    if (san < 1 || san > 5) {
        cout<< "Yalnys !"<< endl;
        return 0;
    }

    string sozler[5]= {"yaramaz", "kanagatlanarsyz", "kanagatlanarly", "yagsy", "oran yagsy"};
    string cykmalysoz = sozler[(san -1)% 5];

    cout <<"senin yazan sanyn sul soz: " << cykmalysoz << endl;


    int pause;
    cin >> pause;

    return 0;
}