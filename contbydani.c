#include<stdio.h>
int main()
{
    int num_pos = 0, num_neg = 0, num_zero = 0, num;
    for(int i = 1; i <= 10; i++){
        printf("\n digite o %d numero: ", i);
        scanf("%d",&num);
        if(num < 0){
            num_neg ++;
        }else if(num == 0){
            num_zero++;
        }else{
            num_pos++;
        }  
    }
    printf("%d positivos, %d zeros, %d negativos",num_pos, num_zero,num_neg);
    return 0;
}