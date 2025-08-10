#include <iostream>

using namespace std;

int find(int number[], int size, int target)
{
    for (int i = 0; i < size; i++)
        if (number[i] == target)
            return i;
    return -1;
}

int main()
{
    int number[] = {12, 23, 34, 45};
    cout << find(number, size(number), 45) << endl;

    system("PAUSE");
    return 0;
}