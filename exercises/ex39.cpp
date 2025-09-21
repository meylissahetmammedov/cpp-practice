#include <iostream>
using namespace std;

int main(){

    int a ;
    cout<< "Birinjy san giriz: ";
    cin >>  a;

    int b;
    cout << "Ikinji san giriz: ";
    cin >> b;

    if ( b == a ) {
        cout << "0" << endl;
    }else{
        cout << a + 1 << endl  << b +1 ;
    }
    // Berilen iki san biri birinde den dal bolsa onda olaryn ulysyny yazmalu, eger den bolsa 0 cykarmaly

    int pause;
    cin >> pause;

    return 0;
}