#include<stdio.h>
int main()
{
    float num, dobro;
    printf("digite um numero: ");
    scanf("%f",&num);
    dobro = num * 2;
    printf("o dobro do numero %.2f eh: %.2f",num, dobro);
}