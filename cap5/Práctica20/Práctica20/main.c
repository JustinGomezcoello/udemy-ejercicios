#include <stdio.h>
#include <stdlib.h>

/*Escribir un programa que lea un fichero llamado n�meros.txt que contiene
una lista de n�meros (uno en cada fila) y devuelva la suma de dichos n�meros.*/

int main()
{
    FILE *f;
    f = fopen("numeros.txt","r");
    int suma = 0,numero;

    while(feof(f) == 0){
        fscanf(f,"%d", &numero);
        suma = suma + numero;

    }

    printf("La suma de todos los numeros del fichero es: %d\n", suma);

    fclose(f);
}
