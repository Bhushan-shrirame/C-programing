#include <iostream>

using namespace std;

void printSomething(){
    cout << "printSomething function" <<endl;
}              

int main() {
    
    printSomething();
    return 0;
}

//void function  -  this function dont give any output


// OR

#include <iostream>
using namespace std;

void printSomething();         // defining at the top and then writing the funtion code later

int main() {
    printSomething();
    return 0;
}

void printSomething(){
    cout << "printSomething function";
}
