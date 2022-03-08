#include <iostream>
using namespace std;

class BhushanClass{                        // Class classname{};
    public:                                // public    
       void cool(){
           cout << "cool" << endl;
       }
};

int main() {
    BhushanClass BhushanObject;              // nameoftheclass objectname
    BhushanObject.cool();                    // objectname.functionname();
    return 0;
}
