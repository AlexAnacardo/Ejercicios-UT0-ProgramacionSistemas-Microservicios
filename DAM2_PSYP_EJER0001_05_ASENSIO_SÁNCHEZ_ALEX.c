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
    char operacion;
    bool salir=false;
    
    while(!salir){
        printf("Introduce un numero:\n");
        scanf("%d", &numero1);
        
        printf("Introduce otro numero:\n");
        scanf("%d", &numero2);
        
        getchar(); 
        
        printf("¿Que quieres hacer?:\n a.Sumar \n b.Restar \n c.Multiplicar \n d.Dividir \n e.Salir \n");
        scanf("%c", &operacion);
        
        switch(operacion){
            case 'a': 
                printf("La suma de los dos numeros es: %d\n", numero1+numero2);
            break;
            
            case 'b': 
                printf("La resta de los dos numeros es: %d\n", numero1-numero2);
            break;
            
            case 'c': 
                printf("La multiplicación de los dos numeros es: %d\n", numero1*numero2);
            break;
            
            case 'd': 
                printf("La division de los dos numeros es: %f\n", (float)numero1/numero2);
            break;
            
            case 'e': 
                salir=true;
                printf("Saliendo del programa...")
            break;
            
            default:
                printf("Operacion no valida\n");
            break;
        }
    }

    return 0;
}