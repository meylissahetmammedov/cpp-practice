#include <iostream>

using namespace std;

int main()
{
    double sales = 95000;
    cout << "Sales: $" << sales << endl;

    const double stateTaxRate = .04;
    double stateTax = sales * stateTaxRate;
    cout << "Statetaxe:$" << stateTax << endl;

    const double countyTaxRate = .02;
    double countyTax = sales * countyTaxRate;
    cout << "County Tax : $" << countyTax << endl;

    double totalTax = stateTax + countyTax;
    cout << "Total tax : $" << totalTax << endl;

    return 0;
}