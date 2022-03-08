#include <iostream>
#include <string>
using namespace std;

class BhushanClass{
    
    public:
        BhushanClass(string z){           // Construtor
            setname(z);
        }
        void setname(string x ){
            name = x; 
        }
        string getname(){
            return name;
        }
    private:
        string name;
};

int main() {
    
    BhushanClass bo("Constructor");
    cout << bo.getname();
    
    BhushanClass bo2("Constructor --2");
    cout << bo2.getname();
    return 0;
}



// we can create multiple objects from  the same class and they will not override each other
