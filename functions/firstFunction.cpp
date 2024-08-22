#include<iostream>
#include<string>
using namespace std;

//This function is to print "Hello" five times
void firstFunction(){
    for(int i = 0; i < 5; i++){
        cout<<"Hello"<<endl;
    }
}
//Void type funtions can not be stored in any variable because its null
int main(){

    cout<<"Hello welcome to my first program."<<endl;
    cout<<"Please enter your name: ";

    string name;
    cin>>name;

    firstFunction();
    cout<<"Thank you for using my program " << name<<"!"<<endl;

    return 0;
}