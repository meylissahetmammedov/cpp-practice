#include <iostream>
#include <fstream>
#include <string>

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
        getline(file, str);
        while (!file.eof())
        {
            getline(file, str, ',');
            if (str.empty())
                continue;
            // bu kod bolsa gidip dakimentdaki filimin adyny alyp gelya
            Movie movie;
            movie.id = stoi(str);

            getline(file, str, ',');
            movie.title = str;

            getline(file, str);
            movie.year = stoi(str);

            cout << movie.title << endl;
        }

        file.close();
    }

    int pause;
    cin >> pause;
    return 0;
}
