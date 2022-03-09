#include <iostream>
using namespace std;

int main() {
    
    int age;
    int agetotal = 0;
    int numberofpeople =0;
    
    cout << "enter firsr person age or -1 to quit" << endl;
    cin >> age;
    while(age != -1){
        agetotal = agetotal + age;
        numberofpeople++;
        
        cout << "enter firsr person age or -1 to quit"<< endl;
        cin >> age;
    }
    cout << "number of people enterd " <<numberofpeople << endl;
    cout << "average age " << agetotal/numberofpeople << endl;
    
    
    return 0;
}
