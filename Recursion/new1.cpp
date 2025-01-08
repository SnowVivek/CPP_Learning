#include <iostream>
using namespace std;

void func1(int n){
    if(n>0){
        printf("%d ", n); //executed at calling time 
        func1(n-1);
    }
}

int main(){
    int x = 3;
    func1(x);
}