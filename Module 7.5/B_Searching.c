#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int ar[n];

    for(int i=0; i<n;i++){
        scanf("%d",&ar[i]);
    }

    int j;
    scanf("%d",&j);

    int ans = -1;


    for(int i=0; i<n;i++){
        if(ar[i] == j){
            ans = i;
            break;
        }
    }
    printf("%d\n",ans);

    return 0;
}