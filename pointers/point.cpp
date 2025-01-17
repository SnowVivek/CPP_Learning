#include <iostream>
using namespace std;

int main(){

    int a = 10;
    int *p;
    p = &a;
    if (p) {
        cout << "Pointer is initialized and points to: " << *p << endl;
    }else {
        cout << "Pointer is not initialized." << endl;
    }
    return 0;

}