#include <iostream>
using namespace std;

int main() {
    int array[2][3] = {{1,2,4},{8,9,10}};
    
    //2,3,4
    //8,9,10
    
    cout << array[0][0];
}

//printing the MD array

#include <iostream>
using namespace std;

int main() {
    int array[2][3] = {{1,2,4},{8,9,10}};

    for(int row = 0; row<2; row++){
        for(int column =0; column<3; column++){
            cout << array[row][column]<< " ";
        }
        cout << endl;
    }
