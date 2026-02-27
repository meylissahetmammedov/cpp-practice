#include <iostream>
using namespace std;


int main(){
    cout << "A, B, C nokatlaryny giriz!! "<< endl;
    int a, b, c;
    cout << "A nokat: "  ;
    cin >> a;
    cout << "B nokat: " ;
    cin >>  b;
    cout << "C nokat: "  ;
    cin >> c;

    int b_uzaklyk = b - a;
    int c_uzaklyk = c - a;

    cout << "B nokatdan A nokada uzaklyk: "<< b_uzaklyk << endl;
    cout << "C nokatdan A nokada uzaklyk: "<< c_uzaklyk << endl<< endl;

    if (b_uzaklyk < c_uzaklyk) {
        cout << "B - nokady A nokadyna has yakyn"<<endl;
        cout<< "Uzaklyk: " << b_uzaklyk << endl;

    }else if (c_uzaklyk < b_uzaklyk  ) {
        cout << "C - nokady A nokadyna has yakyn"<<endl;
        cout<< "Uzaklyk: " << c_uzaklyk << endl;
    }else {
        cout << "B we C nokatlar A-ya den uzaklykda" << endl;
        cout << "Uzaklyk: " << b_uzaklyk;
    }


    return 0;
}