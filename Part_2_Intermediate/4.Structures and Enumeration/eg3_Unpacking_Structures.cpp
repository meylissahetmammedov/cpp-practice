#include <iostream>

using namespace std;
struct Movie
{

    string title;
    int releaseYear;
    bool isPopular; // structured binding'de 'isPopuler' kullandığınız için buraya da eklemeliyiz
};
int main()
{
    Movie movie = {"Terminator", 1984, true};
    /* string title = movie.title;
    int releaseYear = movie.releaseYear;
    bool isPopular = movie.isPopular;*/
    // C++: structured binding
    // JS: destructuring
    // Python : unpacking
    auto [title, releaseYear, isPopular]{movie};
    cout << title << endl;
    cout << releaseYear << endl;
    cout << isPopular << endl;

    system("PAUSE");
    return 0;
}