#include <stdio.h>
void invertir(int a, int b)
{
    int auxiliar;
    printf("--Numeros sin invertir--\n");

    printf("Primer numero (A): %d\n", a);
    printf("Segundo numero (B): %d\n", b);

    printf("--Numeros invertidos--\n");

    auxiliar = a;
    a = b;
    b = auxiliar;

    printf("Primer numero (A): %d\n", a);
    printf("Segundo numero (B): %d\n", b);
}
void orden(int a, int b)
{
    printf("--Numeros ordenados--\n");
    if (a > b)
    {
        printf("Numero mas chico: %d\n", b);
        printf("Numero mas grande: %d\n",a);
    }else
    {        
        printf("Numero mas chico: %d\n", a);
        printf("Numero mas grande: %d\n",b);
    }
}
void numero_al_cuadrado2(int numero)
{
    int cuadrado = numero * numero;
    printf("\n El cuadrado del numero ingresado es: %d", cuadrado);
}

int numero_al_cuadrado(int numero)
{
    return numero * numero;
}
int main()
{
    int cuadrado, primero, segundo;
    printf("--Ingrese a continuacion dos numeros--");

    printf("Ingrese el primer numero: \n");
    scanf("%d", &primero);
    printf("Ingrese el segundo numero: \n");
    scanf("%d", &segundo);
    cuadrado = numero_al_cuadrado(primero);
    numero_al_cuadrado2(primero);
    invertir(primero, segundo);
    orden(primero,segundo);

    return 0;
}
