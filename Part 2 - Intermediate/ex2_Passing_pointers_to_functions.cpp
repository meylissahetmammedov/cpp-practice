#include <iostream>

using namespace std;

void swap(int *first, int *second, int *third, int *four)
{
    int temp = *first;
    *first = *second;
    *second = temp;
    int temp1 = *third;
    *third = *four;
    *four = temp1;
}

int main()
{
    int x = 10;
    int y = 20;
    int c = 30;
    int v = 40;
    swap(&x, &y, &c, &v);
    cout << x << "," << y << "," << c << "," << v << endl;

    system("PAUSE");
    return 0;
}