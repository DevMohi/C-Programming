#include<stdio.h>
#include<limits.h>
int main(){
    int n,val;

    int max = INT_MIN;
    int min = INT_MAX;
    scanf("%d",&n);

    for(int i=0; i<n;i++){
        scanf("%d",&val);

        if(val > max){
            max = val;
        }
        if(val<min){
            min = val;
        }
    }
    printf("%d %d\n",min,max);
    return 0;
}