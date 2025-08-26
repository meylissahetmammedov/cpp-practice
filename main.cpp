#include <iostream>
#include "Part_3_Advanced/1.Classes/TextBox/TextBox.h"
#include "Part_3_Advanced/1.Classes/TextBox/TextBox.cpp"

using namespace std;

int main()
{
   double a;
    cout << "KG olcegini giriz: ";
    cin >> a;

    double b = a/ 1000;

    double c;
    cout << "Ton olceginzi girizin: ";
    cin >> c;
    double d = c * 1000;

    cout << "Sizin jogabynyz netijesi: " << b << " tonna" <<" = " << a<<" kg "<< endl;
    cout << "Sizin jogabynyz netijesi: " << d << " kg "<< "=" << c<< "tonna "<< endl;
    return 0;
}