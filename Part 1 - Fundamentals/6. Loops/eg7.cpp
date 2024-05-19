#include <iostream>

using namespace std;

int main (){

    while(true){
        cout << "Number :";
        int number ;
        cin >> number;
        if (number >= 1 && number <= 5)
           break;
    cout << "Error ! Enter a numberb between 1 and 5 " << endl;

    }


    system ("PAUSE");
    return 0;
}