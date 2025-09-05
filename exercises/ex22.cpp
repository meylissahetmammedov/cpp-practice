#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Sekunt  san girizin: ";
    cin >> a;
    if (a < 3600) {
        cout << "3600  dan uly sekunt wagt girizmeli:";
        cin>> a;
    };
    int b = a % 3600;

    //Berilen sekundy , in sonky sagadynda nece sekunt gecenligini capa cykarmal
    cout << "Jogap: "<< b <<" sekunt "<<endl;

    int pause;
    cin >> pause;

    return 0;
}