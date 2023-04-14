#include<stdio.h>

int main(){
    
    int n;
    scanf("%d",&n);

    long long int ar[n];

    for(int i=0; i<n; i++){
        scanf("%lld",&ar[i]);  
    }
    
    int is_palindrome = 1;
    for (int i = 0; i < n/2; i++) {
        //equal jodi na hoi taile condition cholbe
        if (ar[i] != ar[n-i-1]) {
            is_palindrome = 0;
            break;
        }
    }
    
    if(is_palindrome){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}