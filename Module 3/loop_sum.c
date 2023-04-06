#include<stdio.h>

int main(){
    long long int sum=0;
    int i;
    int n;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        sum+=i;
    }
    //bahire print kore coz we want one value
    printf("%lld",sum);
}