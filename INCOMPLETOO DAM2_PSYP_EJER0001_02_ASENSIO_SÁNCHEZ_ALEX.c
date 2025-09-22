/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero1;
    int numero2;
    
    printf("Introduce un numero:\n");
    scanf("%d", &numero1);
    
    printf("Introduce otro numero:\n");
    scanf("%d", &numero2);
    
    printf("La dirección de memoria del primer numero es: %p\n", &numero1);
    
    printf("La dirección de memoria del segundo numero es: %p\n", &numero2);
    
    printf("La variable 1 ocupa %ld bytes de tamaño en memoria\n", sizeof(numero1));

    return 0;
}