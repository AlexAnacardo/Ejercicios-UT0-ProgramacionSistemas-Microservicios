/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamaño=0;
        
    while(tamaño < 2 || tamaño > 10){
        printf("Introduce el tamaño de la matriz (entre 2 y 10):\n");
        scanf("%d", &tamaño);
    }

    int matriz1[tamaño][tamaño];
    int matriz2[tamaño][tamaño];
    int resultado[tamaño][tamaño];

    printf("\nMatriz 1:\n");
    for(int i = 0; i < tamaño; i++) {
        for(int j = 0; j < tamaño; j++) {
            matriz1[i][j] = rand() % 10;
            printf("%2d ", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz 2:\n");
    for(int i = 0; i < tamaño; i++) {
        for(int j = 0; j < tamaño; j++) {
            matriz2[i][j] = rand() % 10;
            printf("%2d ", matriz2[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < tamaño; i++) {
        for(int j = 0; j < tamaño; j++) {
            for(int k = 0; k < tamaño; k++) {
                resultado[i][j] = matriz1[i][k] * matriz2[k][j];
            }
        }
    }      
    

    printf("\nResultado de la multiplicación:\n");
    for(int i = 0; i < tamaño; i++) {
        for(int j = 0; j < tamaño; j++) {
            printf("%4d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
