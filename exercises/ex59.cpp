#include <iostream>
using namespace std;


int main(){
    cout << "A, B nokatlaryny giriz!! "<< endl;
    int OX, OY;
    cout << "A nokat: "  ;
    cin >> OX;
    cout << "B nokat: " ;
    cin >>  OY;


    if (OX == 0 && OY == 0) {
        cout <<"Jogap: " << 0;
    } else if (OX == 0) {
        cout <<"Jogap: " << 1;
    }else if (OY == 0) {
        cout <<"Jogap: " << 2;
    }else {
        cout <<"Jogap: " << 3;
    }

    return 0;
}