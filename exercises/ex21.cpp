#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Sekunt  san girizin: ";
    cin >> a;

    int b = a % 60;

    //Berilen sekundyn , in sonky minudyn nace sekunt gecenligini capa cykarmaly
    cout << "Jogap: "<< b <<" sekunt  "<<endl;

    int pause;
    cin >> pause;

    return 0;
}