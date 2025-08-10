#include <iostream>

int main()
{
    const double PI = 3.14;
    int a = 1;
    int b = 2;
    int temp = a;
    a = b;
    b = temp;
    std::cout << a << " " << b;

    std::cout << std::endl;
    system("PAUSE");
    return 0;
}