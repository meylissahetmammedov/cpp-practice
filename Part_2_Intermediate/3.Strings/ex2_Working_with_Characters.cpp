#include <iostream>

using namespace std;
// bul c++ kody bize , ulanyja kod beremizde ulaylyan ,
bool isValid(string customerNumber)
{
    if (customerNumber.length() != 6) // barde kod 6 sifirdan ybarat bolmaly bolamsa / yalnys
        return false;

    for (int i = 0; i < 2; i++)
        if (!isalpha(customerNumber[i])) // barde aytyanty 1-2 setirde harp bolmaly
            return false;

    for (int i = 2; i < customerNumber.length(); i++) // barde 3-nji setirden baslap 6 njy setire cenli san bolmaly
        if (!isdigit(customerNumber[i]))
            return false;

    return true;
}

int main()
{
    cout << "You  need write  6 characters first two need character alphabet and  3 until 6 numbers" << endl;
    cout << " (If your code is right > 1 )" << endl;
    cout << "         Else > 0         " << endl;
    string customerNumber;
    cout << "Enter code: " << endl;
    cin >> customerNumber;

    cout << isValid(customerNumber) << endl;

    system("PAUSE");
    return 0;
}