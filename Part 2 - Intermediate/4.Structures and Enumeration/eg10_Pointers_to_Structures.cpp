#include <iostream>

using namespace std;

struct Movie
{
    string title;
    int releaseYear;
    bool isPopular;
};

ostream &operator<<(ostream &stream, const Movie &movie)
{
    stream << movie.title;
    return stream;
}

Movie getMovie()
{
    return {"Terminator", 1984};
}

void showMovie(Movie *movie)
{
    cout << movie->title;
    cout << endl;
    cout << (*movie).title;
}

int main()
{
    auto movie = getMovie();
    showMovie(&movie);

    int pause;
    cin >> pause;

    return 0;
}