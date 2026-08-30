#include <stdio.h>

int main(){
    char Op;
    scanf("%c",&Op);
    float Matriz[12][12];
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%f",&Matriz[i][j]);
        }
    }
    float soma = 0;
    for(int i = 1; i <11; i++){
        for(int j = 7; j < 12; j++){
            if ((i <= 5 && j > 11 - i)||(i >= 6 && j > i))
            {
                soma += Matriz[i][j];
            }
            
        }
    }
    if(Op == 'S') printf("%.1f\n", soma);
    if(Op == 'M'){
        float media = soma /30;
        printf("%.1f\n", media);
    }
    return 0;
}