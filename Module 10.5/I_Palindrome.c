#include<stdio.h>
#include<string.h>

int main(){
    char a[1001];
    scanf("%s",&a);

    int ans=1;
    // 0 1 2  5 4 3
    for(int i=0,j=strlen(a+1); i<j; i++,j--){
        if(a[i] != a[j]){
            ans = 0;
            break;
        }
        
    }
    if(ans){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}