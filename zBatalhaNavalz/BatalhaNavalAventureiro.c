#include <stdio.h>

int main(){

int tabuleiro [10][10];// Matriz 10x10
char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
int i, j;

 //Inicializa o tabuleiro com 0 (água)
for (i = 0; i < 10; i++){
    for (j = 0; j < 10; j++){
        tabuleiro[i][j] = 0;}}
 
//Posiciona navio horizontal (3 posições)
for (j = 2; j < 5; j++){
    tabuleiro[1][j] = 3;
        for (i = 5; i < 8; i++){
            tabuleiro[i][7] = 3;}}

    //Posiciona navio diagonal (3 posições)
for (i = 3; i < 6; i++){
    tabuleiro[i][0+i] = 3;
        for (j = 1; j < 4; j++){
            tabuleiro[9-j][j] = 3;}}

    //Exibe cabeçalho das colunas (números)
    printf(" ");// espaço pra alinhar
    for (j = 0; j < 10; j++){
    printf("%d ", j);}

    printf("\n");
 //Exibe o tabuleiro com letras das linhas (A–J)
    for (i = 0; i < 10; i++){
    printf("%c ", linha[i]); // imprime a letra da linha
    for (j = 0; j < 10 ; j++){
    printf("%d ", tabuleiro[i][j]);}
    printf("\n");}
    
 return 0;
}