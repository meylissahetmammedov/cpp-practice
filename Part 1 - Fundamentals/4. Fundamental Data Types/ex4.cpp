#include <iostream>

using namespace std;

int main(){
    string names[3];

    cout << "Enter the Name :";
    getline(cin, names[0]);

    cout << "Enter the Name :";
    getline(cin, names[1]);

    cout << "Enter the Name :";
    getline(cin, names[1]);

    cout <<"He is the best :"<< names[0] << endl;


    system("PAUSE");
    return 0;
}