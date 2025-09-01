#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Uc belgili san girizin: ";
    cin >> a;

    int d = a/100;
    int c = (a/ 10) %10;
    int b = a % 10;
    // Berilen sanyn in sonky  sifirny basyna  yazdyryp cap etmeli
    cout << "Berilen sifirlaryn in sonky sifirny basyna gecirende: "<< b<<d<<c <<endl;

    int pause;
    cin >> pause;
    return 0;
}