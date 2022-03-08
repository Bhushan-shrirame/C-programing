WORNG WAY -->

#include <iostream>
#include <string>
using namespace std;

class BhushanClass{
    public:
        string name;
};

int main() {
    BhushanClass Bo;
    Bo.name = "bhushan shrirame";
    cout << Bo.name;
    return 0;
}


RIGHT WAY -->
    
#include <iostream>
#include <string>
using namespace std;

class BhushanClass{
    
    public:
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
    
    BhushanClass bo;
    bo.setname("bhuahan shrirame");
    
    cout << bo.getname();

    return 0;
}
