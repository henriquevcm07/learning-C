#include <stdio.h>
#include <stdlib.h>

int menor(int a, int b){
    if(a<b)
        return a;
    else
        return b;
}

int main(){
    int N;
    scanf("%d",&N);
    while (N != 0){
        int *matriz = (int *) malloc(N*N*sizeof(int));
        for (int i = 0; i < (N+1)/2; i++)
        {
            for (int j = 0; j < (N+1)/2; j++)
            {
                matriz[i*N+j] = menor(i,j)+1;
                matriz[i*N+(N-1-j)] = menor(i,j)+1;
                matriz[(N-1-i)*N+j] = menor(i,j)+1;
                matriz[(N-1-i)*N+(N-1-j)] = menor(i,j)+1;
            }
        }
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (j == 0) {
                    printf("%3d", matriz[i*N+j]);
                } else {
                    printf(" %3d", matriz[i*N+j]);
                }
            }
            printf("\n");
        }
        printf("\n");
        free(matriz);
        scanf("%d",&N);
    }
    return 0;
}