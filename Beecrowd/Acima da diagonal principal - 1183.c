#include <stdio.h>

int main(){
    float matriz[12][12];
    char op;
    scanf("%c",&op);
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%f",&matriz[i][j]);
        }
    }
    float soma = 0;
    for (int i = 0; i < 12; i++)
    {
        for(int j = i+1; j < 12; j++){
                soma += matriz[i][j];
        }
    }
    if (op == 'S')
        printf("%.1f\n", soma);
    if (op == 'M'){
        float result = soma / 66;
        printf("%.1f\n",result);
    }
    return 0;
}