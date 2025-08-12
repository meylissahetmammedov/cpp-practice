#include <iostream>

using namespace std;

int main()
{
    string name = "Johnny";
    string &username = name;

    username = "Agajan";

    cout << "name: " << name << endl;
    cout << "username: " << username << endl;

    system("Pause");

    return 0;
}