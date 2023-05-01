// Some of the built-in functions
//printf()
//scanf()
//strlen
//strcmp
//strcpy


//Needs math.h file
//ceil() floor() round() sqrt() pow() abs()

// Ceil gives the upper value 
// ceil(3.001) ->4
// ceil(3.0) -> 3 


//floor(3.99) -> 3


//round()
// >=3.5 = ceil use korbe
// <3.5 floor use korbe

//Power functions
// pow(a,b) 
// 5- a 3-b ans = 125; 

//Abs function
//negative hoileo value positive dibe
//int er jonno tik kore kaaj kore
//long long int er jnno tik kore kaaj korena
//aitar jnno stdlib.h header file use korte hoi

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    // double x;
    // scanf("%lf",&x);

    // int s = round(x);
    // printf("%d",s);


    // Square roots 
    // int x;
    // scanf("%d",&x);

    // double ans = sqrt(x);
    // printf("%.2lf",ans);
    
    //Power functions
    // pow(a,b) 
    // 5- a 3-b ans = 125; 

    // int a,b;
    // scanf("%d %d",&a,&b);
    // int ans = pow(a*1.0,b*1.0);
    // printf("%d\n",ans);


    //Abs

    int x;
    scanf("%d",&x);
    int ans = abs(x);
    printf("%d",ans);
    
    return 0;
}