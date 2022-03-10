#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int age = 30;
    int money = 800;
    
    if(age > 21 && money > 500){                      // And operator (both need to be true)
        cout << " your are allowed" << endl;
    }
    
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int age = 30;
    int money = 10;
    
    if(age > 21 || money > 500){                        // OR operator (one need to be true) 
        cout << " your are allowed" << endl;
    }
    
    return 0;
}
