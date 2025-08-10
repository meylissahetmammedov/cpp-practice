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
    Movie movie1 = {"Terminator", {1984, 6, 1}};

    Movie movie2 = {"Terminator", {1984, 6, 2}};

    if (movie1.title == movie2.title &&
        movie1.releaseDate.year == movie2.releaseDate.year &&
        movie1.releaseDate.month == movie2.releaseDate.month &&
        movie1.releaseDate.day == movie2.releaseDate.day)
        cout << "Equal" << endl;
    else
        cout << "Not same" << endl;

    system("PAUSE");
    return 0;
}