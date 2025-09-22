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
    int numero1;
    int numero2;
    int numero3;
    int variableVacia;
    bool ordenados=false;
    
    printf("Introduce un numero:\n");
    scanf("%d", &numero1);
    
    printf("Introduce otro numero:\n");
    scanf("%d", &numero2);
    
    printf("Introduce otro numero:\n");
    scanf("%d", &numero3);
    
    while(!ordenados){
        if(numero1>numero2){
            variableVacia=numero1;
            numero1=numero2;
            numero2=variableVacia;
        }else if(numero2>numero3){
            variableVacia=numero2;
            numero2=numero3;
            numero3=variableVacia;
        }
        else{
            ordenados=true;
        }
    };
    
    printf("Numeros ordenados: %d %d %d", numero1, numero2, numero3);

    return 0;
}