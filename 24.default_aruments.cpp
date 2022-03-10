#include <iostream>
using namespace std;

int volume(int l=1,int w=1, int h=1);          // here we are giving  some value to the parameters so the value given is default value

int main() 
{
    cout << volume();                           // if user give value to the function then it will overide the default value
    
}

int volume(int l,int w, int h){
    return l*w*h;
}
