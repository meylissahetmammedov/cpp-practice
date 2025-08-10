#include <iostream>

using namespace std;

int main()
{
    cout << "1" << "," << "2" << endl;
    cout << "You need select  the number:";

    short input;
    cin >> input;

    switch (input)
    {
    case 1:
        cout << "You selected 1" << endl;
        break;
    case 2:
        cout << "You selected 2" << endl;
        break;
    default:
        cout << "Goodbye!" << endl;
    }

    /* if(input==1)
        cout << "You selected 1" ;
     else if (input ==2)
        cout <<"You selected 2";
     else
        cout << "Goodbye!"; */

    system("PAUSE");
    return 0;
}