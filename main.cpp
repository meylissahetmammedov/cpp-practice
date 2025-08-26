#include <iostream>
#include "Part_3_Advanced/1.Classes/TextBox/TextBox.h"
#include "Part_3_Advanced/1.Classes/TextBox/TextBox.cpp"

using namespace std;

int main()
{
   int a;
    cout << "Kilobayt  giriz: ";
    cin >> a;

    int b = a* 1024;

    cout<< "Netije: "<<a << " kilobayt = " <<b << " bayt" << endl;

    return 0;
}