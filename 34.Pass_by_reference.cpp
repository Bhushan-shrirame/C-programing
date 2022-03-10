#include <iostream>
using namespace std;

void passbyvalue(int x);
void passbyreference(int *x);

int main() {
    int bet = 13;
    int saf = 13;
    
    passbyvalue(bet);
    passbyreference(&saf);                        
    
    cout << "bet is now " << bet << endl;                          
    cout << "saf is noe " << saf <<endl;             

}

void passbyvalue(int x){                                  // assigning valu to the copy of the bet which is x 
    x =99;
}

void passbyreference(int *x){                               // asigining value to the address of the saf 
    *x= 66; 
}
