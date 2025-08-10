#include <iostream>

using namespace std;

int main()
{
    string name = "Meylis Sahetmammedov";
    cout << name.find('a', 8) << endl;

    string name2 = "Meylis Sahetmammedov";
    size_t t = -1;
    cout << t << endl;
    cout << name2.find('A') << endl;

    string name3 = "Meylis Sahetmammedov";
    if (name3.find('A') == -1)
        ;
    cout << "Doesn't Exist!" << endl;

    string name4 = "Meylis Sahetmammedov";
    if (name4.find("Sah") == -1)
        ;
    cout << "Doesn't Exist!" << endl;

    string name5 = "Meylis Sahetmammedov";
    cout << name5.rfind('a') << endl; // harplan in sonundan baslap gozleya(rfind)

    string name6 = "Meylis, Sah.etmammedov?";
    cout << name6.find_first_of(",.;?=+-") << endl;

    string name7 = "Meylis, Sah.etmammedov?";
    cout << name7.find_last_of(",.;?=+-") << endl;

    system("PAUSE");
    return 0;
}