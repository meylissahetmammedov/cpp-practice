#include <iostream>

using namespace std;

int main()
{
    int *numbers = new int[5];
    int entries = 0;

    while (true)
    {
        cout << "Number: ";
        cin >> numbers[entries];
        if (cin.fail())
            break;
        entries++;
    }

    for (int i = 0; i < entries; i++)
        cout << numbers[i] << endl;

    system("PAUSE");
    return 0;
}