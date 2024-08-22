#include<iostream>
using namespace std;

//Logic for checking odd number
int odd_out(int x){
    if(x % 2 == 0){
        //x is even
        return false;
    } else {
        // x is true
        return true;
    }
}


int main(){
    int a;
    cout<<"Enter a number ";
    cin>>a;
    int b;
    cout<<"Enter second number ";
    cin>>b;
    for(int i = a; i <= b; i++){
        if(odd_out(i)){
            cout<<i<<" "; 
        }
    } 
return 0;
}