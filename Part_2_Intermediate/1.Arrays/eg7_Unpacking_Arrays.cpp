#include <iostream>

using namespace std;

int main()
{
    int values[5] = {11, 22, 33, 44, 55};
    auto [x, c, v, b, n] = values;
    cout << x << "," << c << "," << v << "," << b << "," << n << endl;

    // C++: structured binding
    // JavaScript:  destructuring
    // Python : unpacking

    // int x = values[0];
    // int y = values[1];
    // int z = values[2];

    system("PAUSE");
    return 0;
}