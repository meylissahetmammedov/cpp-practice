#include <iostream>
using namespace std;

int main(){

    short  ay ;
    cout<< "1-12 araklyk Ayy  sany  girizin: ";
    cin >> ay;

    int gunsany;

    switch (ay) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            gunsany = 31 ;
            break;
        case 4: case 6: case 9: case 11:
            gunsany = 30 ;
            break;
        case 2:
            gunsany = 28 ;
            break;
        default:
            cout << " Nadogry san !";

    }


    cout <<  gunsany <<" gun bar" << endl;


    int pause;
    cin >> pause;

    return 0;
}