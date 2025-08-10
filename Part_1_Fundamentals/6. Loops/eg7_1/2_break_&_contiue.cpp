#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i % 3 == 0) // 3 ce bolunyan sanlary ayyra
            continue;
        cout << i << endl;
    }

    system("Pause");
    return 0;
}