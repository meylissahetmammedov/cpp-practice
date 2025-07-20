#include <iostream>

using namespace std;

enum class Action
{
    List = 1,
    Add = 2,
    Update = 3
};

int main()
{
    cout << "1: List invoices" << endl
         << "2: Add invoice" << endl
         << "3: Update invoice" << endl
         << "Select: ";

    int input;
    cin >> input;

    if (input == static_cast<int>(Action::List))
    {
        cout << "List invoices" << endl;
    }
    else if (input == static_cast<int>(Action::Add))
    {
        cout << "Add invoice" << endl;
    }
    else if (input == static_cast<int>(Action::Update))
    {
        cout << "Update invoice" << endl;
    }
    else
    {
        cout << "Invalid selection" << endl;
    }

    cout << "Press enter to exit...";
    cin.ignore();
    cin.get();
    return 0;
}