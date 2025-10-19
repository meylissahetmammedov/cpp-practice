#include <iostream>
using namespace std;

int main(){
    int san;
    cout << "San giriz:" ;
    cin >> san;

    if (san == 0) {
        cout << "nol san";
    } else if (san > 0) {
        if (san % 2 == 0) {
            cout << "polozitel jubut san";
        } else {
            cout << "polozitel tak san";
        }
    } else {
        if (san % 2 == 0) {
            cout << "otrisatel jubut san";
        } else {
            cout << "otrisatel tak san";
        }
    }


    return 0;
}