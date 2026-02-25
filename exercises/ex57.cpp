#include <iostream>
using namespace std;

int main(){
    double a, b, c, d;
    cout << " 1-njy san giriz: ";
    cin >> a;
    cout << " 2-nji  san giriz: ";
    cin >> b;
    cout<< " 3 - nji  san giriz: ";
    cin >> c;
    cout << " 4 - nji  san giriz: ";
    cin >> d;

    // Girizen sanlaryndan menzes dalini capa cykarya
    int pause;
    if ( a == b &&  a == c) {
        cout << "Jogap: " << d <<  endl;
    }else if (a == b && a == d ) {
        cout << " Jogap: " << c <<  endl;
    }else if (a  == c && a == d ) {
        cout << " Jogap: " << b <<  endl;
    }else if (b  == c && b == d ) {
        cout << " Jogap: " << a <<  endl;
    }else {
        cout << "Hic biri menzes dal!!";
    }
    cin >> pause;

    return 0;
}