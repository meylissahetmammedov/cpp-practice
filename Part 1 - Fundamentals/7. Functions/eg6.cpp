#include <iostream>

using namespace std;

void print0ddNumber(int limit)
{
    for (int i = 0; i < limit; i++)
    {
        if (i % 3 == 0)
            cout << i << endl;
    }
    for (int m = 0; m < limit; m++)
    {
        if (m % 2 == 0)
            cout << m << endl;
    }
}

int main()
{
    print0ddNumber(100);

    system("PAUSE");
    return 0;
}