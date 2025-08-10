#include <iostream>

using namespace std;

int main()
{
    string name = " Meylis";
    name.insert(0, "I am"); // munda i am adyn onude goyya, (insert)
    cout << name << endl;

    string name2 = "Meylis";
    name2.erase(0, 2); // erase yazanda 0,2 diyip yazsan harplan onki 2 sanysy yitya,(erase)
    cout << name2 << endl;

    string name3 = "Meylis";
    name3.append(" Sahetmammedov"); // Munda at/familyany birlesdirya,(append)
    cout << name3 << endl;

    string name4 = "Meylis";
    name4.replace(0, 3, "MEY"); // Adyn onundaki harplan yerini calsya(replace)/ (clear)- bolsa tutus yok etya
    cout << name4 << endl;

    system("PAUSE");
    return 0;
}