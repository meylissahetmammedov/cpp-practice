#include <iostream>
using namespace std;

int main(){

    int n ;
    cout<< "Amaly girizin (1:+, 2:-, 3:*, 4:/): ";
    cin >>  n;

    int a,b;
    cout << "Birinjy  sifir girizin: ";
    cin >> a;
    cout << "Ikinji sifir girizin: ";
    cin  >> b;

    int netije;
// berilen sany amllary ulanyp isletmeli
    switch (n) {
        case 1:
            netije = a + b;
            cout << "Senin beren amalyn jogaby: " << a << " + " << b <<" = "<< netije<< endl;
            break;

        case 2:
            netije = a - b;
            cout << "Senin beren amalyn jogaby: " << a << " - " << b <<" = "<< netije<< endl;
            break;

        case 3:
            netije = a * b;
            cout << "Senin beren amalyn jogaby: " << a << " * " << b <<" = "<< netije<< endl;
            break;
        case 4:
            if (b != 0){
                netije = a / b;
                cout << "Senin beren amalyn jogaby: " << a << " / " << b <<" = "<< netije;
            } else
                cout << "bolmekde nol bolup bilmeya!";
            break;


    }

    int pause;
    cin >> pause;

    return 0;
}