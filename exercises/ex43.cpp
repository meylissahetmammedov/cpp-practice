#include <iostream>
using namespace std;

int main(){

    int a ,b ,c ;
    cout<< " Birinjy san giriz: ";
    cin >>  a;
    cout<< " Ikinji san giriz: ";
    cin >>  b;
    cout<< " Ucunji san giriz: ";
    cin >>  c;




    if ( a > 0 && b > 0 && c > 0 ) {
        cout << "Jogap: 3 sany   polozitel bar "  ;
    }else if (a <= 0 && b > 0 && c > 0) {
        cout << "Jogap: 2 polozitel, 1 otirsatel bar " <<   endl ;
    }else if (a > 0 && b <= 0 && c > 0 ){
        cout << "2 polozitel, 1 otirsatel bar" << endl ;
    }else if (a > 0 && b > 0 && c <= 0 ){
        cout << "2 polozitel, 1 otirsatel bar" << endl ;
    }else if (a <= 0 && b <= 0 && c > 0 ){
        cout << "1 polozitel, 2 otirsatel bar" << endl ;
    }else if (a > 0 && b <= 0 && c <= 0 ){
        cout << "1 polozitel, 2 otirsatel bar" << endl ;
    }else if (a <= 0 && b > 0 && c <= 0 ){
        cout << "1 polozitel, 2 otirsatel bar" << endl ;
    }else if (a <= 0 && b <= 0 && c <= 0 ){
        cout << " polozitel san yok!" << endl ;
    }

    //Uc sany san girizilende nace sany polozitel , nace sany otirsatel san bardygyny cykarmaly

    int pause;
    cin >> pause;

    return 0;
}