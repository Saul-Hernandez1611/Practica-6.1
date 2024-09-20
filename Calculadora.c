/*Garcia Hernandez Erick Saul
Ejercicio 1, Practica 6
Hacer un algoritmo que pueda ejecutar una suma, una resta, multiplicación y division al usuario. */

#include <stdio.h>
#include <math.h>

int main()
{
int a = 0, b = 0, operation = 0;
int option;

    printf("Dime que operación deseas realizar: \n);
    printf("1.- Suma; \n");
    printf("2.- Resta: \n");
    printf("3.- Multiplicación: \n");
    printf("4.- División; \n");
    scanf("%d", option);
    break;
}

do
{
    printf("Dame los numeros:\n");
    printf("primer numero: ");
    scanf("%d", &a);
    printf("segundo numero: ");
    canf("%d", &b);
}

    switch (option)
    {

        case 1: 
        operation = a + b;
        break;  
        case 2:   
        operation = a - b;
        break;
        case 3:
        operation = a * b;
        break;
        case 4:
        operation a / b;
        break;
    }
    printf("El resultado de la operación es: %d\n", operation);

    printf("Dime que operación deseas realizar: \n);
    printf("1.- Suma; \n");
    printf("2.- Resta: \n");
    printf("3.- Multiplicación: \n");
    printf("4.- División; \n");
    scanf("%d", &option);
  }
  while (option != -1);

  return 0;
}
