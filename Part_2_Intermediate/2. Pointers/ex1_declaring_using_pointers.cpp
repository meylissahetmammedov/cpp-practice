#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int y = 20;
    int *ptr = &x;
    *ptr *= 2;
    ptr = &y;
    *ptr *= 3;

    cout << x << "," << y << endl;

    system("PAUSE");
    return 0;
}