#include <iostream>

using namespace std;

int main()
{
    int numbers[] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
    int *ptr = &numbers[size(numbers) - 1];
    while (ptr >= numbers)
    {
        cout << *ptr << endl;
        ptr--;
    }

    system("PAUSE");
    return 0;
}