#include<iostream>
using namespace std;

int main(){
    struct {
        int myNum;
        string myString;
    } myStructure;

    myStructure.myNum = 1;
    myStructure.myString = "Messi";

    cout << myStructure.myNum <<"\n";


    return 0;
}