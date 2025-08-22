#include <iostream>
#include "Part_3_Advanced/1.Classes/Volume/Volume.h"

using namespace std;

int main()
{
    Volume v;
    double w, l, h;

    cout << "Enter width: ";
    cin >> w;
    v.setWidth(w);

    cout << "Enter length: ";
    cin >> l;
    v.setLength(l);

    cout << "Enter height: ";
    cin >> h;
    v.setHeight(h);

    v.print();

    return 0;
}