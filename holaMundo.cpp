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
void CalcularDatos(int arreglo[], int tamano, float *promedio , int *maximo , int *minimo)
{
    if(tamano <0)
    {
        return;
    }
    *maximo = arreglo[0];
    *minimo = arreglo[0];
    *promedio = 0.0;

    for (int i = 0; i < tamano; i++) {
        *promedio += arreglo[i];

        if (arreglo[i] > *maximo) {
            *maximo = arreglo[i];
        }
        if (arreglo[i] < *minimo) {
            *minimo = arreglo[i];
        }
    }

    *promedio /= tamano;
}
int BuscarIndice(int arreglo[],int tamano2,int numero)
{
    for(int i=0;i<tamano2;i++)
    {
        if(arreglo[i]==numero)
        {
            return i;
        }
    }
    return -1;
}

int esPrimo(int numero);
//Funcion principal
int main ()
{
    //variables par o impar
    int num ,num2;
    //es primo 
    int primo;
    //Arreglo promedio
    int numeros[] = {5, 10, 15, 20, 25};
    int tamano = sizeof(numeros) /sizeof(numeros[0]);

    float promedio;
    int maximo , minimo ;

    //Varables ejecicio 4
    int numeros2[] = {5, 10, 15, 20, 25};
    int tamano2 = sizeof(numeros2) /sizeof(numeros2[0]);

    //<----------------------------Ejercicio 1------------------>
    printf("ingresa un numero\n");
    scanf("%d",&num);
    ParImpar(num);
    printf("ingresa un numero\n");
    scanf("%d",&num2);
    ParImpar(num2);
    //<-------------------------Fin Ejercicio 1---------------------->
    //<--------------Ejercicio 2--------------->
    printf("\n\nIngresa un numero\n");
    scanf("%d",&primo);

    if(esPrimo(primo))
    {
        printf("El numero es primo\n");
    }else{
        printf("El numero no es primo\n");
    }
    //<-------------------------Fin Ejercicio 2---------------------->
    //<-------------------Ejecicio 3----------------->
    CalcularDatos(numeros, tamano, &promedio, &maximo, &minimo);

    printf("Promedio: %.2f\n", promedio);
    printf("Valor maximo: %d\n", maximo);
    printf("Valor minimo: %d\n", minimo);
    //<-------------------------Fin Ejercicio 3---------------------->

    //<------------------Ejercicio 4-------------->
    int numeroBuscado1 = 20;
    int numeroBuscado2 = 8;

    int indice1 = BuscarIndice(numeros2, tamano2, numeroBuscado1);
    int indice2 = BuscarIndice(numeros2, tamano2, numeroBuscado2);

    if (indice1 != -1) {
        printf("El numero %d se encuentra en el indice %d\n", numeroBuscado1, indice1);
    } else {
        printf("El numero %d no se encontro en el arreglo\n", numeroBuscado1);
    }

    if (indice2 != -1) {
        printf("El numero %d se encuentra en el indice %d\n", numeroBuscado2, indice2);
    } else {
        printf("El numero %d no se encontro en el arreglo\n", numeroBuscado2);
    }
    //<-------------------------Fin Ejercicio 4---------------------->

    //<-------------------Ejercicio 5-------------------------------->
    
    return 0;
}
//Funcion para saber si es primo 
int esPrimo (int primo)
    {
        if(primo ==0 || primo ==1)return 0;
        if(primo ==4)return 0;

        for (int x = 2; x < primo / 2; x++) {
            if (primo % x == 0) return 0;
        }
        return 1;       
    }    