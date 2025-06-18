#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // Null terminator (\0)
    // String literal
    char name[50] = "Meylis";
    char lastName[] = " Sahetmammedov";
    // Concatenate (Combine)
    strcat(name, lastName);
    cout << name << endl;

    system("PAUSE");
    return 0;
}