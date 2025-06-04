#include <iostream>

using namespace std;

void printNumbers(int numbers[])
{
    numbers[0] = 0;
}

int main()
{
    int numbers[] = {11, 22, 33};
    printNumbers(numbers);
    cout << numbers[1] << endl;

    system("PAUSE");
    return 0;
}