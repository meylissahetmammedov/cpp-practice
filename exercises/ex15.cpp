#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Uc belgili san girizin: ";
    cin >> a;

    int d = a/100;
    int c = (a/ 10) %10;
    int b = a % 10;
    // Berilen sanyn ortadaky san bilen basyndaky sifirin yerini calsyp cap etmeli
    cout << "Berilen sifirlaryn ortasyndaky we  basyndaky sanlaryn yerlerini  calsanda: "<< c<<d<<b <<endl;

    int pause;
    cin >> pause;
    return 0;
}