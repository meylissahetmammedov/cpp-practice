#include <iostream>

using namespace std;
// PascalCase
struct Custemer
{
    int id;
    string name;
    string email;
};

int main()
{
    Custemer custemer;
    cout << " ID: ";
    cin >> custemer.id;

    cout << " Name: ";
    cin >> custemer.name;

    cout << " email: ";
    cin >> custemer.email;

    cout << "Name :" << custemer.name << endl;

    system("PAUSE");
    return 0;
}