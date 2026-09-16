#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;          //Numero de vezes
    scanf("%d",&N);

    for (int a = 0; a < N; a++)
    {
        int M;              //tamanho da matriz
        scanf("%d",&M);

        int* matriz = (int*) malloc(M*M*sizeof(int)); //alocação da matriz na memória


        for (int i = 0; i < M*M; i++)
        {
            scanf("%d",&matriz[i]);     //loop para preencher a matriz
        }

        int* produto = (int*) malloc(M*M*sizeof(int)); //alocação da matriz de saída

        //loop triplo principal
        for (int i = 0; i < M; i++) // i = linha
        {
            for (int j = 0; j < M; j++) // j igual a coluna
            {
                produto[i*M+j] = matriz[i*M+j] * matriz[i*M+j];
            }
        }
        printf("Quadrado da Matriz #%d:\n",a+4);
        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < M; j++)
            {
                printf("%d ",produto[i*M+j]);
            }
             printf("\n");
        }
        puts("");
    }
    return 0;
}
