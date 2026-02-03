#include <iostream>
using namespace std;

int main(){

    int a ,b  ;
    cout<< " A san giriz: ";
    cin >>  a;
    cout<< " B san giriz: ";
    cin >>  b;

    int kici = min(a, b);
    int  uly = max(a, b);

    a = kici;
    b = uly;

    cout<< "A kici san: " << a << endl;
    cout<< "B uly san: " << b << endl;

    //A,B san girizende her gezek a ve b sanlaryny uytgedip a san kici san edip cykarmaly

    int pause;
    cin >> pause;

    return 0;
}