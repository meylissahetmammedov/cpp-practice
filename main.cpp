#include <iostream>
#include "Part_3_Advanced/1.Classes/TextBox/TextBox.h"
#include "Part_3_Advanced/1.Classes/TextBox/TextBox.cpp"

using namespace std;

int main()
{
    TextBox box;
    box.setValue("Hello World");
    cout << box.getValue();

    return 0;
}