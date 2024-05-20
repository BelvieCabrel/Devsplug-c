#include <stdio.h>
int main(){
    int a,b;
    printf("entrer deux nomnres");
    scanf("%d,%d",&a,&b);
    printf("dividenter = %d, divior=%d", a,b);


    if (a%b==0){
        return 1;
    }
    else{
        return 0;
    }
}