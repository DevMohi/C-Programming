#include<stdio.h>

void fun(int i){
    if(i == 6) return; //Base case - jeita die recusrion thame
    //Recursion ke age call korle reverse value dei
    fun(i+1); // see module 17-6 if have problem
    printf("%d\n",i);
}
int main(){
    fun(1);
    return 0;
}