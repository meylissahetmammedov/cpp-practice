#include <iostream>
#include <memory>

using namespace std;

int main()
{
    auto x = make_shared<int>();
    *x = 11;

    shared_ptr<int> y(x);
    cout << *y << endl;

    system("PAUSE");
    return 0;
}