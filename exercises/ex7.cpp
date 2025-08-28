#include<iostream>

using namespace std;

int main(){
    int a,b;
    cout << "Birinjy sany giriz: ";
    cin >> a;
    cout << "ikinji sany giriz: ";
    cin >> b;
    // berilen iki sifirin jemi ve kopeltmek hasyl jogaby
    int c = a + b;
    int d = a * b;
    cout << "Berilen sifirlan jemi: "<< c << endl << "Kopelitmek hasylyn jemi: " << d << endl;


    return 0;
}