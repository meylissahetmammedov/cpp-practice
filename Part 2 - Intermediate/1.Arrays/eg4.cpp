#include<iostream>

using namespace std;

int main (){
    int first[]={10,20,30,40};
    int second[]= {10,2,30,40};

    bool areEqual = true;
    for (int i = 0; i < size(second); i++)
        if (first[i] !=second[i]){
            areEqual  = false;
            break;
        }

    cout << boolalpha << areEqual << endl;

    system("Pause");
    return 0;
}