#include <iostream>
#include <limits>
using namespace std;

int main()
{
    // Buffer: temporary storage
    int first;
    while (true)
    {
        cout << "First :";
        cin >> first;
        if (cin.fail())
        {
            cout << "Enter a valid number! " << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else
            break;
    } // barde harp girizende kabul etman dine san yazmaly

    cout << "Second :";
    int second;
    cin >> second;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "You entered " << first << " and " << second;

    int pause;
    cin >> pause;
    return 0;
}