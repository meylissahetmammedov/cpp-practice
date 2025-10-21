#include <iostream>
using namespace std;

int main(){
    int san;
    cout << "San giriz:";
    cin >> san;

    if (san == 0) {
        cout << "Nul" << endl;
        return 0;
    }

    const string ysharat = san > 0 ? "Polozitel" : "Otrisatel";
    const string jubutTaklik = san % 2 == 0 ? "jubut" : "tak";

    cout << "Jogap: "<< ysharat << " " << jubutTaklik << " " << " san" << endl;


    return 0;
}