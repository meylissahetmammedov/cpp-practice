#include <iostream>
using namespace std;

int main(){
    int san;
    cout << " Capa cykarmaly san :";
    cin >> san;
    int k;
    cout << " Nace gezek capa cikarmalky san:";
    cin >> k;
    //Berilen a sany k san sapar capa cykarmaly
    if (san < 0) {
        cout << "0 - dan uly san girizmeli!!";
        return 0;
    }
    cout <<"Jogap:" ;
    for (int i = 0; i < k; i++) {
        cout <<  san  ;
    }


    return 0;

}