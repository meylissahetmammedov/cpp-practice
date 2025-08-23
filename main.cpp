#include <iostream>
#include "Part_3_Advanced/1.Classes/Volume/Volume.h"

using namespace std;

int main()
{
    long long a;
    cout << "Enter the number: ";
    cin >> a;

    int b = 10;

    int c = a % b;
    cout << "Last digit number: " << c << endl;

    return 0;
}