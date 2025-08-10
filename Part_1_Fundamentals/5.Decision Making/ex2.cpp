#include <iostream>
 
using namespace std;

int main (){
    int sales;
    cout <<"Enter the price:";
    cin >> sales;
    double commission;
    if (sales <=10'000)
        commission = .1;
    else if (sales <=15'000)
        commission = .15;
    else
        commission = .2;    
    cout <<commission << endl;

    system("PAUSE");
    return 0;
}