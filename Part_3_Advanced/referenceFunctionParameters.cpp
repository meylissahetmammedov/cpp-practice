#include <iostream>

using namespace std;

void greet(string &username)
{

    username = '.';

    username = "Sohbet";
}

int main()
{
    string name = "Agajan";

    greet(name);

    cout << name << endl;

    system("PAUSE");
    return 0;
}