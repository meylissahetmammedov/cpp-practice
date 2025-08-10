#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    char name[50] = "Meylis";
    char lastName[] = " Sahetmammedov";
    if (strcmp(name, lastName) == 1)
        cout << "Equal" << endl;

    system("PAUSE");
    return 0;
}