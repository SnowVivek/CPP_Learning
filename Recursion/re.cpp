#include <iostream>
using namespace std;

void fun1(int nums[], int size, int index){

    if(index < size){
        fun1(nums, size, index + 1); 
        cout << nums[index] << " ";
    }
}

int main (){

    int nums[5] = {1, 2, 3, 4, 5};
    fun1(nums, 5, 0);
    return 0;
}