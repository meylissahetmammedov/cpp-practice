#include <iostream>


using namespace std;

int max(int first , int second){
    cout << "Enter First number :";
    cin >> first;
    cout << "Enter Second number :";
    cin >> second;
    return (first > second) ? first : second;
}

int main (){
    int larger = max(1,2);
    int large = max(8,5);
    int larg = max(344,577);
    int lar = max(88,135);
    int la = max(355,576);
    cout << larger << endl
         << large << endl
         << larg << endl
         << lar << endl
         << la << endl;

    system("PAUSE");
    return 0;
}