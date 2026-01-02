#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Sekuntdan minda gecirmli san girizin: ";
    cin >> a;


    int b = a /60;
    //Beeilen sekundy , minut wagtyna  gecirmneli
    cout << "Jogap: "<< b <<" minut"<<endl;

    int pause;
    cin >> pause;
    return 0;
}