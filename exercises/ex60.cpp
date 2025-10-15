#include <iostream>
using namespace std;


int main(){
    cout << "A, B, C nokatlaryny giriz!! "<< endl;
    int OX, OY;
    cout << "X bahany giriz: "  ;
    cin >> OX;
    cout << "Y bahany giriz: " ;
    cin >>  OY;

    if (OX > 0 && OY > 0) {
        cout <<"1-njy caryek! " ;
    } else if (OX > 0 && OY < 0) {
        cout <<"4-nji caryek! ";
    }else if (OX <0 && OY > 0) {
        cout <<"2-nji caryek! ";
    }else if(OX <0 && OY <0){
        cout <<"3-nji caryek! ";
    }


    return 0;
}