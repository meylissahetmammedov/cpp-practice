#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int y = 20;

    int *ptrX = &x;
    int *ptrY = &x;

    if (ptrX != nullptr)
        cout << *ptrX << endl;

    if (ptrX == ptrY)
        cout << "Same" << endl;

    system("PAUSE");
    return 0;
}
