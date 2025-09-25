#include <stdio.h>
#include <string.h>

int main()
{
    char palabra[255];
    char palabraVolteada[255];
    
    printf("Introduce una palabra:\n");
    
    scanf("%s", palabra);
    
    for(int i=0; i<strlen(palabra); i++){
        palabraVolteada[i]=palabra[strlen(palabra)-i-1];
    }
    
    printf("Palabra volteada: %s", palabraVolteada);
    
    return 0;
}