#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Uc belgili san girizin: ";
    cin >> a;

    int d = a/100;
    int c = (a/ 10) %10;
    int b = a % 10;
    // Berilen sanyn ilkinji sifirny in sonynda yazdyryp cap etmeli
    cout << "Berilen sifirlaryn birinji sifirny yzyna gecirende: "<< c<<b<<d <<endl;

    int pause;
    cin >> pause;
    return 0;
}