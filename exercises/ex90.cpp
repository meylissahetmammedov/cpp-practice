#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "A sany girizin (A > B): ";
    cin >> a ;
    cout << "B sany girizin (B < A):";
    cin >> b ;

    if (a <= b || b <= 0 || a <= 0 ) {
        cout << "Yalnys!! A > B > 0 bolmaly!" << endl;
        return 1;
    }


    int galansan = a;
    int san = 0;

    cout << a << " kesimde " << b << " kesimni nace sany yerleser:" << endl;

    while ( galansan >= b){
        galansan -= b;
        san++;
        cout << san  <<") " << b << " kesim -> Galan: " << galansan << endl;

    }
    cout << "Galyndy san: " << galansan << endl;




    int pause ;
    cin >> pause;
    return 0;
}