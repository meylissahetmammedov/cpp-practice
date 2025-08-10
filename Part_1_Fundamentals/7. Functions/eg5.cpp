#include <iostream>

using namespace std;

const double taxRate = .2;

double calculateTax(int sales) {
    return sales * taxRate;
}

int main (){
  //Local varialble (local scope)
  int sales = 10'000;
  double tax = calculateTax(sales);
  cout << tax << endl;  


    system("PAUSE");
    return 0;
}
