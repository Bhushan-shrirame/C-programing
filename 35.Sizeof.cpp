#include <iostream>
using namespace std;

int main() {
    
    double bucky [10];
    cout << sizeof(bucky) << endl;           // sizeof()  to calculate the memory of the variable.
     
    cout << sizeof(bucky) / sizeof(bucky[0]) << endl;
    
}
