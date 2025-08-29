#include<iostream>
using namespace std;

int main(){
    nt a;
    cout << "Iki belgili san girizin: ";
    cin >> a;
    // berilen iki belgili sanyn , 1 njy cepdaki onluk sifir son , sagdaky birlik sifir cykarya
    int b = a / 10 ;
    int c = a % 10;
    cout << "Berilen sanyn orunlaryny caslsylanda: "<< c<<","<<b << endl;

    int f = a / 10 ;
    int g = a % 10;
    int h= g * 10;
    cout << "Ikinji usul ulanylanda: "<< h + f << endl;

    return 0;
}