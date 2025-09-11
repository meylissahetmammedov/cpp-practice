#include <iostream>
using namespace std;

int main(){
    int Yil;
    cout<< "Yyly girizin: ";
    cin >> Yil;

    int asyr = ((Yil-1) / 100 +1) ;

    cout << Yil << "-njy yyl " << asyr << " asyr bolya"<< endl;


    int pause;
    cin >> pause;

    return 0;
}