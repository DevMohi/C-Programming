#include<stdio.h>
#include<string.h>

int main(){
    char s[100];
    scanf("%s",s);

    //26 ta value tai
    //initialize na korle garbage dibe 
    int cnt[26]= {0};
    for(int i=0; i<strlen(s);i++){
        //-97 korsi index ar value mil thakbe taile
        char value = s[i] - 97;
        // or 
        // char value = s[i] - 'a'; 
        cnt[value]++;
    }

    for(int i=0;i<strlen(s); i++){
        //gives value 0, 1 ,2
        int value = s[i] - 97;
        //repeat na korbar jnno
        if(cnt[value] !=0){
            printf("%c -> %d\n",value+'a', cnt[value]);
        }
        //aikane zero kore disi jeno repeat na kore
        cnt[value] =0;
    }


    // for(int i=0; i<26;i++){
    //     if(cnt[i] != 0){
    //         printf("%c -> %d\n",i+97,cnt[i]);     
    //     }
    // }

    return 0;
}