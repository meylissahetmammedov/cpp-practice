#include<iostream>
using namespace std;

int main(){

    int a ,b ,c ;
    cout<< " 1-njy san giriz: ";
    cin >>  a;
    cout<< " 2-nji  san giriz: ";
    cin >>  b;
    cout<< " 3 - nji  san giriz: ";
    cin >>  c;

    int kici = a;

    if(kici > b) {
        kici = b;
    }if (kici > c) {
        kici = c;
    }

    cout << "In kici san: "<< kici;

    int pause;
    cin >> pause;

    return 0;
}