#include <iostream>

using namespace std;

int main (){
    string name, street;
    cout << "Enter your name: ";
    getline(cin,name);
    cout << "Enter living street:";
    
    getline(cin,street);
    cout <<"Hi : "<< name <<endl <<"Your living street :"<<street<< endl;

    system("PAUSE");
    return 0;
}