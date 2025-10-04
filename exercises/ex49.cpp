#include <iostream>
using namespace std;

int main(){

    int a ,b  ;
    cout<< " A san giriz: ";
    cin >>  a;
    cout<< " B san giriz: ";
    cin >>  b;

    if (a != b ) {
        int max = a;
        if (b > max) {
            max = b;
        }
        a = max;
        b = max;
    }else {
        a = 0;
        b = 0;
    }

    cout<< "A nyn taze bahasy: " << a << endl;
    cout<< "B nyn taze bahasy: " << b << endl;

    //A,B san girizende eger bahalry den dal bolsa onda olary biri brinin ustune gosamly ve ikisinem capa cykarmaly, eger ikisinin bahasy den bolsa 0 den diyip cykarmaly

    int pause;
    cin >> pause;

    return 0;
}