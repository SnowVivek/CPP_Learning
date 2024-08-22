#include<iostream>
using namespace std;
// This function is to convert natural numbers to there squares using loop
int square(int x){
    return x*x;
}

int main(){
    for(int i=1;i<=5;i++){
        cout<<square(i)<<"\n";
    }
    return 0;
}