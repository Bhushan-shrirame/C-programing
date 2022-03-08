#include <iostream>
using namespace std;

int addnumbers(int x, int y){             // multiple parameters 
    int answer = x + y;
    return answer;
} 

int main() {
    
    cout << addnumbers(4,5);             // giving the value to the parameters
    return 0;
}
