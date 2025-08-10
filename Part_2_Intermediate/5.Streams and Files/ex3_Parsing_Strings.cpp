#include <iostream>
#include <sstream>

using namespace std;
struct Movie
{
    string title;
    int year;
    string actor;
};

Movie parseMovie(string str)
{
    stringstream stream;
    stream.str(str);

    Movie movie;
    getline(stream, movie.title, ',');
    stream >> ws >> movie.year;
    stream.ignore();

    getline(stream >> ws, movie.actor);

    return movie;
}

int main()
{
    auto movie = parseMovie("Terminator 1, 1984, Arnold Schwarzenegge");
    cout << "Title: " << movie.title << endl;
    cout << "Year: " << movie.year << endl;
    cout << "Actor: " << movie.actor << endl;

    int pause;
    cin >> pause;
    return 0;
}