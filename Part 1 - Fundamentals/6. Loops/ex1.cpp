#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a Positive number :";
    int number;
    cin >> number;

    if (number < 0)
        cout << "Error!Number is not positive.";

    else
    {
        int factorial = 1; /*factorial eger 3 girissek 3*2*1=6 bolya*/
        for (int i = 1; i <= number; i++)
            factorial *= i;
        cout << "The factorial of " << number << ":" << factorial << endl;
    }

    system("PAUSE");
    return 0;
}