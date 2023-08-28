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

int esPrimo(int numero);
int main ()
{
    int num ,num2;
    int primo;
    printf("ingresa un numero\n");
    scanf("%d",&num);
    ParImpar(num);
    printf("ingresa un numero\n");
    scanf("%d",&num2);
    ParImpar(num2);
    printf("\n\nIngresa un numero\n");
    scanf("%d",&primo);

    if(esPrimo(primo))
    {
        printf("El numero es primo");
    }else{
        printf("El numero no es primo");
    }


    return 0;
}
    int esPrimo (int primo)
    {
        if(primo ==0 || primo ==1)return 0;
        if(primo ==4)return 0;

        for (int x = 2; x < primo / 2; x++) {
            if (primo % x == 0) return 0;
        }
        return 1;
        
    }