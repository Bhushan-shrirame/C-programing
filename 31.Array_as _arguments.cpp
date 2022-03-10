#include <iostream>
using namespace std;

void print(int thearrays[], int sizeofarray);


int main() 
{
   int bhushan[3] = {1,2,3};
   int jess[6] = {1,23,242,2,3,32};
   
   print(jess, 3); 
}

void print(int thearrays[], int sizeofarray){
    for(int x = 0; x <sizeofarray; x++){
        cout << thearrays[x] << endl;
    }
}
