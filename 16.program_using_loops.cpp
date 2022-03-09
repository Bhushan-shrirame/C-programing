#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    int number;
    int total;

    while(x <= 5 ){
        cin >> number;
        x++;
        total = total + number;
    }

    cout << "total is " << total ;

}
