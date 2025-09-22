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
    char cadena[10];
    bool letraEncontrada=false;
    
    printf("Introduce 10 caracteres:\n");
    
    for(int i=0; i<=9; i++){
        printf("Caracter %d: ", i+1);
        scanf("%c", &cadena[i]);
        getchar();
    }

    int contador=0;
    
    while(!letraEncontrada && contador<10){
        if(cadena[contador]=='k'){
            letraEncontrada=true;
            printf("Se introdujo el caracter 'k' en la posicion %d", contador+1);
        }   
        
        contador++;
    }
    
    return 0;
}