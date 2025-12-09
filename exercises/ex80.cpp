#include <iostream>
using namespace std;
int main() {
    int n, a;
    cout << "A sanyny giriz:";
    cin >> a;
    cout << "N sanyny giriz:";
    cin >> n;


    if (n < 0 ) {
        cout << "Yalnys!! N > 0 bolmaly!" << endl;

        return 1;
    }
   //  BERILEN A - san, 1 - dan baslap , N - sana cenli derjelerini yazdyrmaly

    int netije =1;
    if  ( a < 0) {
        cout <<"("<<  a << ")"<< "-sanyn 1-dan  " << n <<"-sana cenli derejeleri " << endl ;
    }else {
        cout <<  a << "-sanyn 1-dan  " << n <<"-sana cenli derejeleri " << endl ;
    }
    cout << "Jobap:  "<< endl;

    for (int i = 1; i <= n; i++) {
        netije *= a ;

        cout << a << "^" << i << " = " << netije << endl ;


    }


    int pause ;
    cin >> pause;
    return 0;
}