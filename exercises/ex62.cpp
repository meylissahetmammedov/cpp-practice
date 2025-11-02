#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int x;
    cout << " San  giriz:";
    cin >> x;
    double netije;
    if (x > 0) {
        netije = 2 * sin(x);
    }else {
        netije = 6 - x;
    }

    cout <<"Jogap:" <<  netije << endl;


    return 0;
}
