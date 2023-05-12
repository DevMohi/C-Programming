#include<stdio.h>

int main(){
    long long int n,k;
    scanf("%lld %lld",&n,&k);
    long long int ar[n];

    for(int i=0; i<n; i++){
        scanf("%lld",&ar[i]);
    }

    //sorting
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(ar[i]<ar[j]){
                long long int temp=ar[i]; // use long long int for temp variable
                ar[i]=ar[j];
                ar[j]=temp;
            }
         }
    }
    long long int sum = 0;
    for(int i=0; i<k; i++){
        if(ar[i]<0){
            break;
        }
        sum += ar[i];
    }
    printf("%lld",sum);
    return 0;
}