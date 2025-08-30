#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Uc belgili san girizin: ";
    cin >> a;

    int d = a/100;
    int c = (a/ 10) %10;
    int b = a % 10;

    cout << "Berilen sifirlaryn + jemi: "<< d+b+c <<endl <<  "Kopeltmek hasylyn jogaby: " << d*c*b;

    int pause;
    cin >> pause;
    return 0;
}