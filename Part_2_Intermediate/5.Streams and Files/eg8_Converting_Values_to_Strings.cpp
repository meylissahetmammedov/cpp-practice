#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{
    double number = 12.34;
    stringstream stream;
    stream << fixed << setprecision(2) << number; // bardaki koda berilen sanyn (.) sonundaky sany nacesi cykmasyny islesen sony cykardyp bolya
    string str = stream.str();
    cout << str;

    int pause;
    cin >> pause;
    return 0;
}