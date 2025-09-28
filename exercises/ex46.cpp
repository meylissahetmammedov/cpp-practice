#include <iostream>
using namespace std;

int main(){

    int a ,b  ;
    cout<< " Birinjy san giriz: ";
    cin >>  a;
    cout<< " Ikinji san giriz: ";
    cin >>  b;


    if ( a > b) {
        cout << "Senin beren sanyn ulysy : "<< a<< endl<<"kicisi: "<< b << endl;
    }else {
        cout << "Senin beren sanyn ulysy : "<< b<<endl<< "kicisi: "<< a << endl;
    }

    //Ikisany san berilipdir olaryn ulusyny sonra bolsa kicisini capa cykarmaly

    int pause;
    cin >> pause;

    return