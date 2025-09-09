#include <iostream>
using namespace std;

int main(){

    int san {};

    while (san < 1 || san > 365) {
        cout << "1-365 aralykda san giriz: ";
        cin >> san;
        if (san < 1 || san > 365) {
            cout << "Yazan sanynyz yok. Tazeden yazyp gorun:" ;
            cin >> san;
        }
    }

    string gunler[7]= {"Anna", "Senbe","Yeksenbe","Dusenbe" , "Sisenbe","Carsenbe", "Pensenbe"};
    string gun = gunler[(san % 7)];

    //hepdanin gunlerini girizmeli(1-njy yanwar senbe), 1-365 gun aralykda san girizende hepdanin nacinji gune dusyanini capa cykarmaly
    cout << "Senin yazan sanyn hepdanin "<< gun <<" gunune gabat gelya! "<<endl;

    int pause;
    cin >> pause;

    return 0;
}
