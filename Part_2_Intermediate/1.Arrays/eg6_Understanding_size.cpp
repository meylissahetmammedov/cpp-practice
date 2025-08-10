#include <iostream>
#include <limits>

using namespace std;

int main()
{
    // using_t = usingned long long
    int numbers[] = {10, 20, 30};
    cout << sizeof(int) << endl;
    cout << sizeof(long long) << endl;
    cout << sizeof(size_t) << endl;
    cout << numeric_limits<long long>::min() << endl;
    cout << numeric_limits<long long>::max() << endl;
    cout << numeric_limits<size_t>::min() << endl;
    cout << numeric_limits<size_t>::max() << endl;

    system("PAUSE");
    return 0;
}