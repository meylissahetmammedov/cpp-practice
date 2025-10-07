#include <iostream>
using namespace std;

int main(){

    int a, b, c;
    cout << " 1-njy san giriz: ";
    cin >> a;
    cout << " 2-nji  san giriz: ";
    cin >> b;
    cout<< " 3 - nji  san giriz: ";
    cin >> c;

    int min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }

    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }


    cout <<"In kici san : "<< min << endl << "In uly san: "<<  max << endl;


    int pause;
    cin >> pause;

    return 0;
}