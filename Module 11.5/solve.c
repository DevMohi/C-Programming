#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    scanf("%s",s);

    int len = strlen(s);
    int palindrome = 1;

    //jabbw //wbbaj
    for (int i=0,j= strlen(s) -1; i < j; i++,j--)
    {
        if (s[i]!=s[j]) {
                palindrome=0;
                break;
            }

        }
    if (palindrome==1)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }

}