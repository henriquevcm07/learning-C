#include <stdio.h>
#include <stdlib.h>

int **gerarMatriz(int L, int C){
    int **matriz = malloc(L* sizeof(int *));
    if(matriz == NULL)
        puts("não foi possível alocar a mémoria");
    for(int i =0; i < L; i++){
        matriz[i] = malloc(C* sizeof(int));
        if(matriz[i] == NULL)
        puts("não foi possível alocar a mémoria");
    }
    for(int i = 0; i < L; i++)
    {
        for(int j = 0; j < C; j++)
            scanf("%d",&matriz[i][j]);
    }
    return matriz;
}
void apagarMatriz(int **matriz, int L){
    for(int i = 0; i < L; i++){
        free(matriz[i]);
    }
    free(matriz);
}
int maxSubmatriz(int L, int C, int M, int N, int **matriz){
    int maiorSoma = 0;
    for (int i = 0; i < L/M; i++)
    {
        for(int j = 0; j < C/N;j++)
        {
            int soma = 0;
            for (int k = 0; k < M; k++)
            {
                for (int l = 0; l < N; l++)
                {
                    soma += matriz[i*M+k][j*N+l];
                }
            }
            if(soma > maiorSoma)
                maiorSoma = soma;
        }
    }
    return maiorSoma;
}

int main(){
    int L= 4, C = 4, M = 2, N = 2;
    int **matriz = gerarMatriz(L,C);
    printf("%d",maxSubmatriz(L,C,M,N,matriz));
    apagarMatriz(matriz,L);
}