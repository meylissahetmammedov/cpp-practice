#include <iostream>

using namespace std;

int main (){
    int temperature ;
    cout <<"Enter the temperature :";
    cin >> temperature;
    if (temperature < 15)
       cout << "Cold";
    else if (temperature <35)
       cout << "Nice";
    else if ( temperature < 60)
        cout << "Hot";
    else 
        cout <<"Warning!";

    cout << endl;
    system("PAUSE");
    return 0; 
}