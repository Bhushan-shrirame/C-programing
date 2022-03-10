#include <iostream>
using namespace std;

int t = 69;                    // global variable

int main() 
{
    int t = 96;                //local variable
    cout << ::t << endl;       // ::varibalename means use global varible
}
