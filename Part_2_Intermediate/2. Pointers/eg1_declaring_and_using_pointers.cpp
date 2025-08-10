#include <iostream>

using namespace std;

int main()
{
    int number = 20;

    // The address-of operator
    int *ptr = &number;
    // Indirection (De-referencing) operator

    *ptr = 10;

    cout << number << endl;

    system("PAUSE");
    return 0;
}