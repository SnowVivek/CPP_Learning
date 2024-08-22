#include<iostream>
using namespace std;

bool checkeligible(int age, int limit){
    if(age >= limit){
    //the person is eligible
    return true;
}   else {
        //person is not eligible
    return false;
}
}

int main(){
    int voting_limit = 18;
    int is_eligible_for_voting = checkeligible(20, voting_limit);
    if(is_eligible_for_voting){
        cout<<"You are eligible";
    }else {
        cout<<"You are not eligible";
    }

return 0;
}