// Pointer  ia a special type of variable which contains a memoery address as their value

#include <iostream>
using namespace std;

int main() {
    
    int fish = 5;
    cout << &fish <<endl;                          // &varibalename  --> for adress of the variable
    
    int *fishpointer;                             // pointer variable --> *variablename
    fishpointer = &fish;
    
    cout << fishpointer << endl;
    
    
}
