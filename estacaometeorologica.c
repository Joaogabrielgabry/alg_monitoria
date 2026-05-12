#include<stdio.h>
int main()
{
    float fah, cel;
    printf("digite a temperatura em celsius: ");
    scanf("%.2f",&cel);
    fah = (cel * 1.8) + 32;
    printf("%f celsius eh em fahrenheit : %f", cel, fah);
}