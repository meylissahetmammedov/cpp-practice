#include <iostream>

using namespace std;

int main()
{
    // US Citizen
    // CA Resident: tuition = 0
    // Non resident : tuition = 1000
    // Non a US Citizen
    // tuition = 3000
    bool isCitizen = true;
    bool caResident = true;
    short tuition = 0;
    // Outer if statement
    if (isCitizen)
    {
        // Inner if statement
        if (!caResident)
            tuition = 1000;
    }
    else
        tuition = 3000;
    cout << tuition << endl;

    system("PAUSE");
    return 0;
}