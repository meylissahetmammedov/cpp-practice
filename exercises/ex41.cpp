#include <iostream>
using namespace std;

int main(){

    int a ;
    cout<< " San giriz: ";
    cin >>  a;


    if ( a > 0  ) {
        cout << "Jogap:" << a+1 ;
    }else if (a < 0) {
        cout << "Jogap:" << a -2  << endl ;
    }else if (a == 0 ){

        cout << "Jogap: 10" << endl ;

    }
    // eger berilen san polazitel bolsa onda 1 gosamaly , bolamsa 2 san ayrmaly, eger 0 den bolsa onda 10 cykarmaly

    int pause;
    cin >> pause;

    return 0;
}