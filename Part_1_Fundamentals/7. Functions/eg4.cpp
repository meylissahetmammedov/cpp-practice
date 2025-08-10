#include <iostream>

using namespace std;
void increasePrice(double &price)
{
    price *= 1.2;
}
void greet(const string name)
{
    cout << "Hello " << name << endl;
}

int main()
{
    double price = 50;
    increasePrice(price);
    cout << price << endl;

    string name = "Meylis";
    greet(name);

    system("PAUSE");
    return 0;
}