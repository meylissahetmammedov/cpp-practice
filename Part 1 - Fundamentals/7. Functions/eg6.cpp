#include <iostream>

using namespace std;

void print0ddNumber(int limit)
{
    for (int i = 0; i < limit; i++)
    {
        if (i % 3 == 0)
            cout << i << endl;
    }
}

int main()
{
    print0ddNumber(100);

    system("PAUSE");
    return 0;
}