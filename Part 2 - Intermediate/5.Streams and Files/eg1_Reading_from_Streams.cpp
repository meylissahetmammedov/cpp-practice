#include <iostream>
#include <limits>
using namespace std;

int main()
{
    // Buffer: temporary storage
    cout << "First :";
    int first;
    cin >> first;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Second :";
    int second;
    cin >> second;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "You entered " << first << " and " << second;

    int pause;
    cin >> pause;
    return 0;
}