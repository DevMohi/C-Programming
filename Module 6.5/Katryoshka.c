#include <stdio.h>
int main()
{
    long long int n,m,k ,res=0;

    scanf("%lld %lld %lld",&n,&m, &k);

    if(n==0 || k==0){
        printf("0\n");
    }
    else{

        //mn stands for minimum
        long long int mn = n;
        if(m<mn){
            mn=m;
        }
        if(k<mn){
            mn=k;
        }
        n = n - mn;
        m = m - mn;
        k = k - mn;

        //Jeita shob theke minimum oita add korba
        res += mn;

        if(n/2 <k){
            res = res + (n/2);
        }
        else{
            res +=k;
        }

        printf("%lld\n", res);
    }

}

