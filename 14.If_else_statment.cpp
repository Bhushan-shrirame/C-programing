#include <iostream>
using namespace std;

int main() 
{
    int x = 11;
    
    if(x == 10){
        cout << "if statment works "<< endl;
    }
    else{
        cout << "else statment works" << endl;
    }
}

nesting if statement -->

#include <iostream>
using namespace std;

int main() 
{
    int x = 110;
    
    if(x >= 10){
        if(x > 100 ){
            cout << "nested if statement ";
        }
        else{
            cout << "nested else statement";
        }
    }
    else{
        cout << "else statement works" << endl;
    }
}
