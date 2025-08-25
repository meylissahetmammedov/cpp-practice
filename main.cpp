#include <iostream>
#include "Part_3_Advanced/1.Classes/TextBox/TextBox.h"
#include "Part_3_Advanced/1.Classes/TextBox/TextBox.cpp"

using namespace std;

int main()
{
   double a;
    cout << "Cm olcegini giriz: ";
    cin >> a;

    double b = a / 100;
    cout << "Inede sen meter olcegin: " << b << "metir" << endl;


    return 0;
}