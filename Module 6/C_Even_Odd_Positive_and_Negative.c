#include<stdio.h>

int main(){
    int n,a;
    scanf("%d",&n);
    int even =0, odd=0, pos =0, neg=0;
    
    for(int i=1; i<=n;i++){
        scanf("%d",&a);

        if(a%2==0){
            even++;
        }
        else{
            odd++;
        }
        //Conflict hoi tai positive value dibena,
        // tai ladder aikane stop kore notun if-else start koro
        
        if(a>0){
            pos++;
        }
        else if(a<0){
            neg++;
        }
    }

    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",pos);
    printf("Negative: %d\n",neg);

    return 0;
}