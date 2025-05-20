#include <iostream>

using namespace std;
void greet(string name)
{
    cout << "Hello " << endl;
}
// Signature = name + (number and type of parametrs)
void greet(string title, string name, string age)
{
    cout << "Hello " << title << " " << name << endl
         << " My age : " << age << endl;
}

int main()
{
    greet("Mr", "Meylis", "23");

    system("PAUSE");
    return 0;
}