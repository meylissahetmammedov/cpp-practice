#include <iostream>
using namespace std;

int main(){
    int birinjiYanwarynHepdeGununinNomeri;
    cout << "Hepdanin 1-7 gunleri aralygy san girizmeli:";
    cin >> birinjiYanwarynHepdeGununinNomeri;

    int hazirkiGuninNomeri {};

    while (hazirkiGuninNomeri < 1 || hazirkiGuninNomeri > 365) {
        cout << "1-365 aralykda san giriz: ";
        cin >> hazirkiGuninNomeri;
        if (hazirkiGuninNomeri < 1 || hazirkiGuninNomeri > 365) {
            cout << "Yzan sanynyz yok. Tazeden yazyp gorun:" ;
            cin >> hazirkiGuninNomeri;
        }
    }

    string hepdeGunleri[7]= {"Yeksenbe","Dusenbe" , "Sisenbe","Carsenbe", "Pensenbe","Anna", "Senbe",};
    string hazirkiGuninAdy = hepdeGunleri[(hazirkiGuninNomeri % 7) + birinjiYanwarynHepdeGununinNomeri - 1];

    //hepdanin gunlerini girizmeli(1-njy b ozun girizende ), 1-365 gun aralykda K san girizende hepdanin nacinji gune dusyanini capa cykarmaly
    cout << "Senin yazan sanyn hepdanin "<< hazirkiGuninAdy <<" gunune gabat gelya! "<<endl;

    int pause;
    cin >> pause;

    return 0;
}