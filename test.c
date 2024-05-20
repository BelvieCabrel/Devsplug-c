#include <stdio.h>
void main(){
    int a,b;
    printf("entrer deux nomnres");
    scanf("%d,%d",&a,&b);
    printf("dividenter = %d, divior=%d", a,b);


    if (a%b==0){
        printf("output: true");
    }
    else{
        printf("output: false");
    }
}