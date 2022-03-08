// +	Addition
// -	Subtraction
// *	Multiplication
// /	Division
// %	Modulo Operation (Remainder after division)


#include <iostream>

using namespace std;

int main() {
    
    int a;
    int b;
    
    cout << "Enter a number \n";
    cin >> a;                              
    cout << "enter a number \n";
    cin >> b;
    
    int sum = a + b;
    int Subtraction = a-b;
    int Multiplication = a * b;
	  int Division = a / b;
    int ModuloOperation = a %b;
    
    
    
    cout << "sum is " << sum << endl;
    cout << "subtracion is " <<Subtraction << endl;
    cout << "multiplication is " << Multiplication << endl;
    cout << "division is " << Division << endl;
    cout << "Modulo is " << ModuloOperation << endl;

    return 0;
}
