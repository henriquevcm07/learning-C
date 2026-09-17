#include <stdio.h>
#include <stdlib.h>

int **gerarMatriz(int N){
    int **matriz = malloc(N* sizeof(int *));
    if(matriz == NULL)
        puts("não foi possível alocar a mémoria");
    for(int i =0; i < N; i++){
        matriz[i] = malloc(N* sizeof(int));
        if(matriz[i] == NULL)
        puts("não foi possível alocar a mémoria");
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            matriz[i][j] = 0;
        }
    }
    return matriz;
}

void apagarMatriz(int **matriz, int N){
    for(int i = 0; i < N; i++){
        free(matriz[i]);
    }
    free(matriz);
}

void preencheMatriz(int **matriz, int n){
    int incremento =1;
    for (int i = 0; i < n; i++)
    {
        if(i%2 == 0){
            for(int j = i; j < n; j++){
                matriz[i][j] = incremento;
                incremento++;
            }
        }
        else{
            for (int j = n-1; j > i-1; j--)
            {
                matriz[i][j] = incremento;
                incremento++;
            }
        }
    }
}

void printarMatriz(int **matriz, int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",matriz[i][j]);
        }
        puts("");
    }
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    int **matriz = gerarMatriz(n);
    preencheMatriz(matriz,n);
    printarMatriz(matriz,n);
    apagarMatriz(matriz,n);
    return 0;
}