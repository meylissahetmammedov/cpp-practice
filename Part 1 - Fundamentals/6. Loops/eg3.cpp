#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter the Number :";
    cin >> number;

    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    system("PAUSE");
    return 0;
}