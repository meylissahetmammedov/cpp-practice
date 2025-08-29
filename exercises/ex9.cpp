#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Uc belgili san girizin: ";
    cin >> a;

    int b = a / 100 ;
    //Berilen uc belgili sanyn ilkinji sifirni capa cykarmak
    cout << "Berilen sanyn ilkinji sifiri: "<< b << endl;

    int pause;
    cin >> pause;
    return 0;
}