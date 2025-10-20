#include <iostream>
using namespace std;

int main(){
    int san;
    cout << "San giriz:";
    cin >> san;

    bool Positive = san > 0;
    bool Negative = san < 0;

    string jogap = Positive ? "Positive" : (Negative ? "Negative" : "nol");
    cout << "Jogap: "<< jogap << endl;


    return 0;
}