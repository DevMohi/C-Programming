#include<stdio.h>
 int main(){
   long long int e,m,b;
   long long int toy=0;
   scanf("%lld %lld %lld",&e,&m,&b);
   long long int sum = e+b;
   for (int i = 0; i <= sum; i++)
    {
        if (e>=1 && m>=1 && b>=1)
        {
            toy++;
            e--;
            m--;
            b--;
        }
        if (e>=2 && m==0 && b>=1)
        {
            toy++;
            e=e-2;
            b--;
        }
    }
    printf("%lld",toy);
   return 0;
 }