#include <iostream>
#include <fstream>

using namespace std;

int main()
{ // bu kodloma /cout&cin dasary fstream yazma we okama kody
    fstream file;
    file.open("file.txt", ios::in | ios::out | ios::binary);
    if (file.is_open())
    {
        file.close();
    }

    int pause;
    cin >> pause;
    return 0;
}