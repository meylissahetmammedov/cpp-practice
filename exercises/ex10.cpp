#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Uc belgili san girizin: ";
    cin >> a;

    int b = a % 10;
    int c = (a/ 10) %10;

    cout << "in sonky sifiri: "<< b <<endl <<  "Oraky sifiri: " << c;

    int pause;
    cin >> pause;
    return 0;
}