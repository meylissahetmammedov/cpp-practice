#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Sekuntdan minda gecirmli san girizin: ";
    cin >> a;

    int b = a /60;
    //Beeilen sekundy , sagat wagtyna  gecirmneli
    cout << "Jogap: "<< b/60 <<" sagat"<<endl;

    int pause;
    cin >> pause;
    return 0;
}