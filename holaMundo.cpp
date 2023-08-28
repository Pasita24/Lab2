#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ParImpar(int num3)
{
    if(num3%2 ==0)
    {
        printf("El %d es par",num3);
    }else
    {
        printf("El %d es impar",num3);
    }
    
}


int main ()
{
    int num ,num2;
    printf("ingresa un numero\n");
    scanf("%d",&num);
    ParImpar(num);
    printf("ingresa un numero\n");
    scanf("%d",&num2);
    ParImpar(num2);
    return 0;
}