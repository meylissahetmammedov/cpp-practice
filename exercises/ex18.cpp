#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "999-dan uly bitin san girizin: ";
    cin >> a;

    int b = (a /1000)%10;
    //Berilen sanyn munlik sifiny capa cykarmaly
    cout << "Berilen sanyn munlik sifiry: "<< b <<endl;

    int pause;
    cin >> pause;
    return 0;
}