#include <iostream>
#include <limits>
using namespace std;
int getNumber(const string &prompt)
{
    int number;
    while (true)
    {
        cout << prompt;
        cin >> number;
        if (cin.fail())
        {
            cout << "Enter a valid number! " << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else
            break;
    }
    return number;
}

int main()
{
    int first = getNumber(" First:");
    int second = getNumber(" Second:");

    cout << "You entered " << first << " and " << second;
    // barde gorkezilen kod bolsa has ansatlasdyrylan (barde harp girizende kabul etman dine san yazmaly)

    int pause;
    cin >> pause;
    return 0;
}