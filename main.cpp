#include <iostream>
#include "Part_3_Advanced/1.Classes/TextBox/TextBox.h"
#include "Part_3_Advanced/1.Classes/TextBox/TextBox.cpp"

using namespace std;

int main()
{
   double a;
    cout << "Cm olcegini giriz: ";
    cin >> a;

    double c;
    cout << "Metir olcegini girizin: ";
    cin >> c;

    double b = a / 100;
    cout << "Inede sen meter olcegin: " << b << "metir" << endl;

    double d = c*100;
    cout << "inede sen cm olcegin:" <<d << "cm" << endl;
    return 0;
}