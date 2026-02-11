using namespace std;

int main(){

    int a ,b ,c ;
    cout<< " 1-njy san giriz: ";
    cin >>  a;
    cout<< " 2-nji  san giriz: ";
    cin >>  b;
    cout<< " 3 - nji  san giriz: ";
    cin >>  c;


    if(a > b && c > a || a < b && c < a ) {
        cout << "Ortaky san: " <<  a;
    }else if (b > c && a > b || b < c && a < b ) {
        cout << "Ortaky san: " <<  b;
    }else if (c > a && b > c || c < a && b < c ) {
        cout <<"Ortaky san: " <<  c;
    }


    int pause;
    cin >> pause;

    return 0;
}