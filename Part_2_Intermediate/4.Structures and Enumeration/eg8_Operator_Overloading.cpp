#include <iostream>
#include <string> // string için gerekli

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
    bool isPopular;
};

bool operator==(const Movie &first, const Movie &second)
{
    return (
        first.title == second.title &&
        first.releaseDate.year == second.releaseDate.year &&
        first.releaseDate.month == second.releaseDate.month &&
        first.releaseDate.day == second.releaseDate.day);
}

ostream &operator<<(ostream &stream, const Movie &movie) // strem->stream ve const eklendi
{
    stream << movie.title;
    return stream;
}

int main()
{
    Movie movie1 = {"Terminator", {1984, 6, 1}};
    Movie movie2 = {"Terminator", {1984, 6, 2}};

    if (movie1 == movie2)
        cout << "Equal" << endl;
    else
        cout << movie1 << endl;

    system("PAUSE");
    return 0;
}