#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    char a[n+1];
    int sum = 0; 

    for(int i=0; i<n; i++){
        //enter tao value nei scanf
        scanf(" %c",&a[i]);
    }
    for(int i=0; i<n; i++){

        int value = a[i] - 48;
        sum = sum + value;

        // To convert 
      
    }
    printf("%d",sum);
    return 0;
}