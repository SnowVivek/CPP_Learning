#include <iostream>
using namespace std;


// This uses pointer but only use the stack memory
int main(){
    int a = 10;
    int *p;
    p = &a;

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << p << endl;
    return 0;
}