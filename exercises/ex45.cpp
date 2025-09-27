#include <iostream>
using namespace std;

int main(){

    int a ,b  ;
    cout<< " Birinjy san giriz: ";
    cin >>  a;
    cout<< " Ikinji san giriz: ";
    cin >>  b;


    if ( a > b) {
        cout << "Senin beren sanyn kicisi : "<< b << endl;
    }else {
        cout << "Senin beren sanyn kicisi : "<< a << endl;
    }

    //Iki sany san girizmeli olaryn haysynyn kicisini  tapmaly

    int pause;
    cin >> pause;

    return 0;
}