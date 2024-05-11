#include <iostream>


using namespace std;

int main (){
    /*&&--||--!*/
    bool isCitizen = true ;
    bool hasBachelorDegree = false ;
    short yearsofExperience = 2;
    bool isEligible = isCitizen &&(hasBachelorDegree || yearsofExperience >=2 );
    cout << boolalpha<< isEligible<< endl;

    system("PAUSE");
    return 0;
}