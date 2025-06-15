#include <iostream>
#include <memory>

using namespace std;

int main()
{
    auto numbers = make_unique<int[]>(15);
    auto y = make_unique<int>();
    numbers[0] = 15;
    cout << numbers[0] << endl;

    system("PAUSE");
    return 0;
}