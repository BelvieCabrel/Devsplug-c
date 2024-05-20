#include <stdio.h>
int main(){
    int nombre;
    int sum=0;
    printf("entrer un nombre");
    scanf("%d",&nombre);
    printf("Input :%d",nombre);

    for(int i =0; i<nombre; i++){
        if (i%3 ==0 || i%5==0){
            sum +=i;
        }
        
    }
    printf("cabrel%d\n",sum);
    return 0;
}