#include <stdio.h>
/*o Mr. Třeboň não segue nenhuma ordem lógica para tocar as campainhas das casas. Após tocar uma campainha e verificar que não é a sua casa, 
ele irá continuar procurando. Além disso, ele não consegue memorizar quais campainhas já tocou. A forma como ele escolhe as casas para tocar a 
campainha segue uma distribuição de probabilidade condicionada apenas à última casa tocada. 
Considere que alguém sempre atende à porta e responde ao Mr. Třeboň se ele mora ali ou não. Queremos saber qual a chance dele não conseguir 
chegar em casa para dormir, sabendo que após tocar um certo número de campainhas ele não aguentará mais e ficará por ali mesmo. */
int main(){
    int n, t, k, m, h = 1;
    int matriz[n][n];
    //n = num de casas, t = casa inicial, k = casa alvo, m =  quantidade de tentativas, h = iteração atual.
    scanf("%d %d %d %d", &n, &t, &k, &m);
    //loop principal do programa
    while (n!=0){
        printf("Instancia %d\n", h);
        //loop duplo de probabilidades de i -> j
        for(int i = 0; i < n; i++){
            for(int j=0; j < n; i++){ 
                scanf("%d", &matriz[i][j]);
            }
        }
        int probabilidade;
        for(int i = 0; i< m; i++){
            for(int j = 0; );
        }
        scanf("%d %d %d %d", &n, &t, &k, &m);
        h++;
    }
    return 0;
}