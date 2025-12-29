#include <iostream>
using namespace std;

int main(){

    double a, b, c;
    cout << " 1-njy san giriz: ";
    cin >> a;
    cout << " 2-nji  san giriz: ";
    cin >> b;
    cout<< " 3 - nji  san giriz: ";
    cin >> c;


    if ( a <= b && b <= c) {
        cout << "Jogap: " << a *2 << ", " << b *2 <<", " << c* 2 <<  endl;
    }if (a >= b && b >= c) {
        cout << " Jogap: " << a *2 << ", " << b *2 <<", " << c* 2 <<  endl;
    }else {
        cout << " Jogap: " << a * -1 << ", "<< b * -1 << ", "<< c * -1 <<  endl;
    }

    
    int pause;
    cin >> pause;

    return 0;
}