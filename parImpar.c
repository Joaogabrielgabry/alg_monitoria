#include<stdio.h>
int main()
{
    int num;
    printf(" digite um numero ");
    printf("\nNumero 1: ");
    scanf("%d",&num);
    if(num %2 == 0){
        printf("o numero %d eh par",num);
    }else{
        printf("o numero %d eh impar",num);
    }

}