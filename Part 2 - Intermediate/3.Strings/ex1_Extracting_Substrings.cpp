#include <iostream>

using namespace std;

int main()
{
    string name = "Meylis  Sahetmammedov Sylapovic";
    auto index = name.rfind(' ');
    string firstName = name.substr(0, index);
    string lastName = name.substr(index + 1);
    cout << "(" << firstName << ")" << endl;
    cout << "(" << lastName << ")" << endl;

    system("PAUSE");
    return 0;
}