#include <iostream>

using namespace std;

int main()
{
    string name = " Meylis";
    name.insert(0, "I am");
    cout << name << endl;

    string name2 = " Meylis";
    name2.erase(0, 2); // erase yazanda 0,2 diyip yazsan harplan onki 2 sanysy yitya
    cout << name2 << endl;

    system("PAUSE");
    return 0;
}