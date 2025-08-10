#include <iostream>

using namespace std;
struct Address
{
    string street;
    string city;
    int zipCode;
};
struct Customer
{
    int id = 0;
    string name;
    string email;
    Address address;
};

int main()
{
    Customer customer = {
        1,
        "Meylis",
        "barsageler@gmail.com",
        {" garassyzlyk 16",
         "Mary ",
         303300}

    };

    cout << "id: " << customer.id << endl;
    cout << "Name: " << customer.name << endl;
    cout << "Email: " << customer.email << endl;
    cout << "Address: " << customer.address.street << ", "
         << customer.address.city << ", " << customer.address.zipCode << endl;

    system("PAUSE");
    return 0;
}