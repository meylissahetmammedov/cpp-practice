#include <iostream>

using namespace std;

int main()
{
    int *numbers = new int[10, 22, 33];
    int *number = new int;
    delete number;
    delete[] numbers;
    number = nullptr;
    numbers = nullptr;
    cout << number << endl;
    cout << numbers << endl;

    system("PAUSE");
    return 0;
}