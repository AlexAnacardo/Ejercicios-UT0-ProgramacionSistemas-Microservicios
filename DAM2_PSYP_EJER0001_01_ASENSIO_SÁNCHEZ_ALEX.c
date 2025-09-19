/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float numero;
    
    printf("Introduce un numero:\n");
    scanf("%f", &numero);
    
    if(numero>5){
        printf("El numero introducido es mayor que 5");
    }
    else{
        printf("El numero introducido es menor que 5");
    }
    
    return 0;
}