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
    // Girizen sanlaryndan menzes dalini capa cykarya
    if ( a == b) {
        cout << "Jogap: " << c <<  endl;
    }else if (a == c) {
        cout << " Jogap: " << b <<  endl;
    }else if (b == c){
        cout << " Jogap: " << a <<  endl;
    }else {
        cout << "Hic biri menzes dal!!";
    }
    int pause;
    cin >> pause;


    return 0;
}