#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a Rows :";
    int number1;
    cin >> number1;
    cout << "Enter second Rows :";
    int number2;
    cin >> number2;

    for (int x = 1; x <= number1; x++)
    {
        for (int y = 1; y <= x; y++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int m = 1; m <= number2; m++)
    {
        for (int n = number2; n >= m; n--)
        {
            cout << "*";
        }
        cout << endl;
    }

    system("PAUSE");
    return 0;
}