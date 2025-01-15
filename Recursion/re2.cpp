#include <iostream>
using namespace std;

void fun2(int n){
    if(n > 0){
        printf("%d", n);
        fun2(n-1);
    }
}


int main(){
    int x = 3;
    fun2(x);
}