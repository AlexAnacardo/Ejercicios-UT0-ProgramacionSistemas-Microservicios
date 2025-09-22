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
    int operacion;
    
    printf("Introduce un numero:\n");
    scanf("%d", &numero1);
    
    printf("Introduce otro numero:\n");
    scanf("%d", &numero2);
    
    printf("¿Que quieres hacer?:\n 1.Sumar \n 2.Restar \n 3.Multiplicar \n 4.Dividir \n 5.Salir \n");
    scanf("%d", &operacion);
    
    switch(operacion){
        case 1: 
            printf("La suma de los dos numeros es: %d\n", numero1+numero2);
        break;
        
        case 2: 
            printf("La resta de los dos numeros es: %d\n", numero1-numero2);
        break;
        
        case 3: 
            printf("La multiplicación de los dos numeros es: %d\n", numero1*numero2);
        break;
        
        case 4: 
            printf("La division de los dos numeros es: %f\n", (float)numero1/numero2);
        break;
        
        case 5: 
            
        break;
        
        default:
            printf("Operacion no valida");
        break;
    }
    

    return 0;
}