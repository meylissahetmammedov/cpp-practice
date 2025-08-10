#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

string to_string(double number, int precision)
{
    stringstream stream;
    stream << fixed << setprecision(precision) << number;
    // bu kod bolsa sol berilen sanyn . dan sony nace sifir cykmalydygyny gorkezyan ve bul koda has kop ulanylya
    return stream.str();
}
int main()
{
    double number = 12.34;

    cout << to_string(number, 3);

    int pause;
    cin >> pause;
    return 0;
}