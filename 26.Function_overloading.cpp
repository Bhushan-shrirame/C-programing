#include <iostream>
using namespace std;

void printNumber(int x){
    cout << " i am printing an integer " << x << endl;
}

void printNumber(float x){
    cout << " now i am printing an float " << x << endl;
}

int main() 
{
   int a = 54; 
   float b = 32.56;
   
   printNumber(a);
   printNumber(b);
}

// here we are using the same function to print something for both the int type and float type
// This is called funtion overloading
