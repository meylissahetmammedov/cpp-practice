#include <iostream>

using namespace std;

int main (){
    string name;
    int age;
    cout<< "Adyn : ";
    cin >> name;
   cout<< "Yasyn :";
   cin >> age;

   if (age < 20)
       cout << "Salawmaleykum "<< name <<endl
           << age <<"Gaty yas ekenina ." ;
    else if (age < 35)
       cout << "Salawmaleykum "<< name <<endl
            << age << " Yas Garrap gidipsina ."  ;
    
    else 
        cout << "Salawmaleykum "<< name <<endl
             << age << "Bayboo Yasyn name ." ;
    
    
    
    
  
    cout << endl;
    system("PAUSE");
    return 0;
}