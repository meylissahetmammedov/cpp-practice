#include <iostream>

using namespace std;
void greet(string name){
    cout << "Hello " << endl;
}
// Signature = name + (number and type of parametrs)
void greet (string title, string name){
    cout << "Hello " << title << " " << name << endl;
}

int main (){
    greet("Mr", "Meylis")  ;

    system("PAUSE");
    return 0;
}