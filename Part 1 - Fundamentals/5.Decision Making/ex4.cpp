#include <iostream>

using namespace std;

int main (){
     cout <<"Enter First numbers :";
     int first ;
     cin >> first;
     
     cout << "Enter Second number :";
     int second ;
     cin >> second;

     cout << "Enter an operator :";
     char op;
     cin >> op;
     switch (op){
        case '+':
            cout << first + second ;
            break;
        case '-':
            cout <<  first- second;
            break;
        case '/':
            cout <<  first / second;
            break;
        case '*':
            cout <<  first * second;
            break;    
        default:
            cout<< "Invali operator !";       
     }
     
      






    cout<< endl;
    system ("PAUSE");
    return 0;
}