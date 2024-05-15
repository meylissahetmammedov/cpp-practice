#include <iostream>

using namespace std;

int main()
{
    int temperatures[] = {60, 80, 90, 50, 40};

    short length = sizeof(temperatures) / sizeof(int);

    int sum = 0;
    for (int temperature : temperatures){
        sum += temperature;
    }
    
    double average = sum / length;
    cout << average << endl;

    system("PAUSE");
    return 0;
} 