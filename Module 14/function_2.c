// return + no parameter 


#include<stdio.h>

//no parameter taile bhitore input nibe jokon 
//call dibe
//void dile kono parameter dile error dibe
//ar na dile ignore korbe
int sum(void){

    int a,b;
    scanf("%d %d",&a,&b);
    int s=a+b;
    return s;
}


int main(){
    // call korle return korbe ans 
    int ans =sum();
    printf("%d",ans);
    return 0;
}