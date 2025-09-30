#include <iostream>
using namespace std;

int main(){

    int a ,b  ;
    cout<< " A san giriz: ";
    cin >>  a;
    cout<< " B san giriz: ";
    cin >>  b;

    if (a != b) {
        int jem = a+ b;
        a = jem;
        b = jem;
    }else {
        a = 0;
        b = 0;
    }

    cout<< "A nyn yaze bahasy: " << a << endl;
    cout<< "B nyn yaze bahasy: " << b << endl;

    //A,B san girizende eger bahalry den dal bolsa onda olary biri brinin ustune gosamly ve ikisinem capa cykarmaly, eger ikisinin bahasy den bolsa 0 den diyip cykarmaly

    int pause;
    cin >> pause;

    return 0;
}