#include<iostream>

using namespace std;

int main() {
    int a;
    cout << "Iki belgili san girizin: ";
    cin >> a;
    // berilen iki belgili sanyn , 1 njy cepdaki onluk sifir son , sagdaky birlik sifir cykarya
    int b = a / 10 ;
    int c = a % 10;
    cout << " Cepdaki onluk san : "<< b << endl<< " sagdaky birli san : " << c;

    return 0;
}
