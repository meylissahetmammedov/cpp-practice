#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Uc belgili san girizin: ";
    cin >> a;

    int d = a/100;
    int c = (a/ 10) %10;
    int b = a % 10;
    // Berilen sanyn sagdan cepe , capa cykarmaly
    cout << "Berilen sifirlaryn tersine yazylanda: "<< b<<c<<d <<endl;

    int pause;
    cin >> pause;
    return 0;
}