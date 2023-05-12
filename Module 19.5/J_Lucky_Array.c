#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int ar[n];

    for(int i=0; i<n;i++){
        scanf("%d",&ar[i]);
    }
    int count[100001] = {0}; 
    int min = INT_MAX;

    for(int i=0; i<n;i++){
        int val = ar[i];
        if(val < min){
            min = val;
        }
    }
    for(int i=0; i<n;i++){
        int val = ar[i];
        if(val == min){
            count[val]++;
        }
    }
    for(int i=0; i<100001; i++){
        if(count[i] > 0){
            if(count[i] % 2 !=0){
                printf("Lucky");
            }
            else{
                printf("Unlucky");
            }
        }
    }

    return 0;
}