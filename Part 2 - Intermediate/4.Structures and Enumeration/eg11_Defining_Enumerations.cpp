#include <iostream>

using namespace std;

enum Action
{
    List = 1,
    Add = 2,
    Update
};

int main()
{

    cout << "1: List invoices" << endl
         << "2: Add invoice" << endl
         << "3: Update invoice" << endl
         << "Select: ";

    int input;
    cin >> input;

    if (input == Action ::List)
    {
        cout << "List invoicse";
    }
    if (input == Action ::Add)
    {
        cout << "Add invoicse";
    }
    if (input == Action ::Update)
    {
        cout << "Update invoicse";
    }
    else
        cout << "no one";

    int pause;
    cin >> pause;
    return 0;
}
