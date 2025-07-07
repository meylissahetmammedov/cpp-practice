#include <iostream>

using namespace std;

struct Movie
{
    string title;
    int releaseYear = 0;
    bool isPopuler = true;
};

int main()
{
    Movie movie = {"Terminator", 1984};
    cout << movie.releaseYear << endl;

    system("PAUSE");
    return 0;
}