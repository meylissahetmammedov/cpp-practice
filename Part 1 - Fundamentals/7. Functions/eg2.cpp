#include <iostream>

using namespace std;

double calculateTaxe(double income, double taxRate = .2){
    return  (income * taxRate);
}

int main (){
    double tax = calculateTaxe(10'000 , .3);
    cout << tax << endl;


    system("PAUSE");
    return 0;
}