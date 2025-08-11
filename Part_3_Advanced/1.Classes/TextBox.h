#ifndef ADVANCED_TEXTBOX_H
#define ADVANCED_TEXTBOX_H

#include <string>
using namespace std;

class TextBox
{
public:
    string getValue();
    void setValue(const string &value);

private:
    string value;
};

#endif