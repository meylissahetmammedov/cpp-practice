#include <iostream>
#include <fstream>

using namespace std;

struct Movie
{
    int id;
    string title;
    int year;
};

int main()
{
    ifstream file;
    file.open("data.txt");
    if (file.is_open())
    {
        string str;
        getline(file, str); // getline ) diyip yazanda sol setirin hemmesini alyp getirya
        cout << str << endl;
        file.close();
    }

    int pause;
    cin >> pause;
    return 0;
}
