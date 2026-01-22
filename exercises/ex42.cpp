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
        cout << "Jogap: 2 sany   polozitel bar " <<   endl ;
    }else if (a > 0 && b <= 0 && c > 0 ){
        cout << "2 sany   polozitel bar" << endl ;
    }else if (a > 0 && b > 0 && c <= 0 ){
        cout << "2 sany   polozitel bar" << endl ;
    }else if (a <= 0 && b <= 0 && c > 0 ){
        cout << "1 sany   polozitel bar" << endl ;
    }else if (a > 0 && b <= 0 && c <= 0 ){
        cout << "1 sany   polozitel bar" << endl ;
    }else if (a <= 0 && b > 0 && c <= 0 ){
        cout << "1 sany   polozitel bar" << endl ;
    }else if (a <= 0 && b <= 0 && c <= 0 ){
        cout << " polozitel san yok!" << endl ;
    }

// 3 sany san berlipdir , sanlaryn icinde nace sany polozitl san bar

    int pause;
    cin >> pause;

    return 0;
}