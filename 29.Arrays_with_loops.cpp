#include <iostream>
using namespace std;


int main() 
{
   int numbers[9];
   
   cout << "elements  - value " << endl;
   
   for(int x = 0; x <=8; x++){
       numbers[x] = 99;
       
       cout << x << "   ------   " << numbers[x]<<endl;
       
   }
}
