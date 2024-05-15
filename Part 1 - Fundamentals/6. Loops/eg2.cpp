#include <iostream>

using namespace std;

int main (){
    int numbers[] = {1,2,3};
    //sizeof(numbers):12
    //sizeof (int): 4
    int length = sizeof(numbers) / sizeof(int);
    for (int i = 0; i < length; i+=2)
        cout << numbers[i] <<endl;
    
    for (int number : numbers)
        cout << number << endl;
    
    
    string name = "Meylis Sahetmammedov";
    for (char ch : name)
        cout << ch << endl;
     
    
    


    system("PAUSE");
    return 0;
}