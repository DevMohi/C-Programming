#include<stdio.h>

int main(){
    int n,j;
    int even_sum=0, odd_sum=0;
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        scanf("%d",&j);

        //jodi even hoi number ta
        if(j%2==0){
            even_sum = even_sum + j;
        }
        
        //jodi odd hoi
        if(j%2==1){
            // taile odd sum er ste add hobe 
            odd_sum = odd_sum + j;
        }
    }

    printf("%d %d", even_sum, odd_sum);

    return 0;
}