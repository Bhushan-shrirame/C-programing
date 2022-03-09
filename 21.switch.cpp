#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int age  = 21;
    
    switch(age){
        case 16:
            cout << "u can drive now" << endl;
            break;
        case 18:
            cout << " buy ticket " << endl;
            break;
        case 21:
            cout << "buy me a beer " << endl;
            break;
        default:
            cout << "sorry u get nothing" << endl;
    }
}
