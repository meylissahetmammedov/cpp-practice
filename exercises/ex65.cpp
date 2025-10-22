#include <iostream>
using namespace std;
int main(){
    int san;
    cout << " 1-999 aralykda san girizmeli :";
    cin >> san;

    if (san < 1 || san > 999) {
        cout << "Nadogry san!";
        return 1;
    }

    string takJubut = (san % 2 == 0) ? "jubut" : "tak";

    if (san < 10){
        cout << takJubut << " birbelgili san";
    }else if (san < 100) {
        cout << takJubut << " ikibelgili san";

    }else cout << takJubut << " ucbelgili san";

    return 0;

}