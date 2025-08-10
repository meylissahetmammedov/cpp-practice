#include <iostream>

using namespace std;

struct Date
{
    short year = 1900;
    short month = 1;
    short day = 1;
};

struct Movie
{
    string title;
    Date releaseDate;
    bool iisPopular;
};

int main()
{
    Movie movie{"terminator", {1984, 6, 1}};
    cout << movie.releaseDate.year << endl;

    system("PAUSE");
    return 0;
}