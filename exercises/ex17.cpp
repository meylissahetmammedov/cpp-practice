#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "999-dan uly bitin san girizin: ";
    cin >> a;

    int b = a /100;
    int c = b % 10;
    //Berilen sanyn yuzlik sifiny capa cykarmaly
    cout << "Berilen sanyn yuzlik sifiry: "<< c <<endl;

    int pause;
    cin >> pause;
    return 0;
}