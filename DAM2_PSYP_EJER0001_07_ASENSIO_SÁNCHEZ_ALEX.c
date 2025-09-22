/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h> 

int main()
{
    int numero;
    bool entradaCorrecta=false;
    
    while(!entradaCorrecta){
        printf("Introduce un numero:\n");
        int comprobadorEntero=scanf("%d", &numero);
        
        if(comprobadorEntero==1 && numero>0 && numero<21){
            printf("El numero introducido esta entre 1 y 20 (%d)", numero);
            entradaCorrecta=true;
        }
        else{
            getchar();
            printf("Entrada no valida, debe introducir un numero entero entre 1 y 20\n");
        }
    }
    
    return 0;
}

