#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void maiusculo(char *palavra){
    int i = 0;
    while (palavra[i] != '\0'){
        if ((int) palavra[i] >= 97){
            int novoChar = (int) palavra[i] -32;
            palavra[i] = (char) novoChar;
        }
        i++;
    }
    
}
void inverter(char *palavra){
    int tamanho = strlen(palavra);
    for (int i = 0; i < tamanho/2; i++)
    {
        char aux = palavra[i];
        palavra[i] = palavra[tamanho - 1 - i];
        palavra[tamanho - 1 - i] = aux;
    }
}
void processarComandos(char *entrada, char *saida){
    FILE *fi = fopen(entrada,"r");
    FILE *fo = fopen(saida, "w");

    char comando; char palavra[30];
    
    while(fscanf(fi," %c %s",&comando,palavra) == 2){
        if (comando == 'I')
            inverter(palavra);
        if (comando == 'M')
            maiusculo(palavra);
        fprintf(fo,"%s\n",palavra);
    }
    fclose(fi);
    fclose(fo);
}

int main(){
    char arq_in[] = "entrada.txt";
    char arq_out[] = "saida.txt";
    processarComandos(arq_in,arq_out);
}