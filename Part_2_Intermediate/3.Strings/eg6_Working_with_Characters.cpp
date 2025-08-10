#include <iostream>

using namespace std;

int main()
{
    string name = " Meylis Sahetmammedov";
    cout << isalpha(name[0]) << endl;

    string name1 = " 1Meylis Sahetmammedov";
    cout << isdigit(name1[0]) << endl;

    string name2 = " Meylis Sahetmammedov";
    cout << isspace(name2[0]) << endl;

    string name3 = " Meylis Sahetmammedov";
    cout << toupper('a') << endl;

    string name4 = " Meylis Sahetmammedov";
    cout << (char)tolower('A') << endl;

    system("PAUSE");
    return 0;
}