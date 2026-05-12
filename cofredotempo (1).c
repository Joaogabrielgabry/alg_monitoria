#include<stdio.h>
int main ()
{
    int pes1, pes2, pes3, pes4, pes5, eu, vida;
    printf("digite as idades de 5 pessoas e depois a sua : \n");
    printf("qual a idade da pessoa 1: ");
    scanf("%d",&pes1);
    printf("qual a idade da pessoa 2: ");
    scanf("%d",&pes2);
    printf("qual a idade da pessoa 3: ");
    scanf("%d",&pes3);
    printf("qual a idade da pessoa 4: ");
    scanf("%d",&pes4);
    printf("qual a idade da pessoa 5: ");
    scanf("%d",&pes5);
    printf("qual a minha idade: ");
    scanf("%d",&eu);
    vida = (pes1 + pes2 + pes3 + pes4 + pes5 + eu);
    printf("nois temos %d anos de vida ", vida);
    return 0;
}