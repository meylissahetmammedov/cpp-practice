#include <iostream>


using namespace std;

/*void greet(string firstName ,string lastName){   
     cout << "Hello " << firstName << " " << lastName <<  endl;
} */
void greet(string name ){   
     cout << "Hello " << name <<  endl;
}

string fullName(string firstName, string lastName){
    // Concatenating (combining)
    return firstName + " " + lastName;
}
 
int main (){
    // Calling - invoking - executing 
 // greet ("Meylis" , "Sahetmammedov");
    greet(fullName("Meylis","Sahetmammedov"));
    
    //cout << name << endl;
    
    cout << "Done"<< endl;


 system("PAUSE");
 return 0;
}