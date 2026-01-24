#include <iostream>
using namespace std;

int main(){

    int a ,b  ;
    cout<< " Birinjy san giriz: ";
    cin >>  a;
    cout<< " Ikinji san giriz: ";
    cin >>  b;

    if ( a > b) {
        cout << "Senin beren sanyn ulysy : "<< a << endl;
    }else {
        cout << "Senin beren sanyn ulysy : "<< b << endl;
    }

    //Iki sany san girizmeli olaryn haysynyn ulydygyny tapmaly

    int pause;
    cin >> pause;

    return 0;
}