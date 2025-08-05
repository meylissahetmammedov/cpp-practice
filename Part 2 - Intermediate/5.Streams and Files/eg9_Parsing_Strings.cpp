#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string str = "20 30 10";
    stringstream stream;
    stream.str(str);

    int first;
    stream >> first;

    int second;
    stream >> second;
    int third;
    stream >> third;
    cout << first + second - third;

    int pause;
    cin >> pause;
    system("PAUSE");
    return 0;
}