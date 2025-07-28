#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file;
    file.open("data.txt");
    if (file.is_open())
    {
        // CSV : Comma Separated Valuve
        file << "id, title,year\n"
             << "1,Terminator 1,1984\n"
             << "2,Terminator 2,1991\n";
        file.close();
    }

    int pause;
    cin >> pause;
    return 0;
}