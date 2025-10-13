#include <stdio.h>

//Função da torrre em recursivo da torre
void moverTorre(int movimento, int total){
    if (movimento > total) return;//parada
    printf("Movimento %d: Direita\n", movimento);
    moverTorre(movimento + 1, total);//chamada recursiva
}

//função do bispo aninhado
void moverBispo(int movimento, int total){
    if (movimento > total) return;//parada
    // Loop aninhado externo: vertical, interno: horizontal
    for (int i = 0; i < 1; i++){//for externo
    for (int j = 0; j < 1; j++){//for interno 
    printf("Movimento %d: Diagonal direita\n", movimento);}}
    moverBispo(movimento + 1, total);//chamada recursiva
}

//Função da Rainha em recursivo da Rainha
void moverRainha(int movimento, int total){
    if (movimento > total) return;//parada
    printf("Movimento %d: Esquerda\n", movimento);
    moverRainha(movimento + 1, total);//chamada recursiva
}

//Função do Cavalo com movimento mais complexos
void moverCavalo(int limiteBaixo, int limiteDireita){
    printf("Movimento do Cavalo: \n");
    for (int i = 1; i <= limiteBaixo; i++){// movimento vertical
    printf("Moviemnto %d: Cima\n", i);
    for (int j = 1; j <= limiteDireita; j++){// só se move lateralmente após subir 2 casas
    if (i < 2) continue;{// só se move lateralmente após subir 2 casas
    printf("Movimeto %d: Direita\n", j);
    break;}}}// sai do loop interno após mover 1 casa pra direita
    
}

//Função main

int main(){

    const int totaltorre = 5;
    const int totalbispo = 5;
    const int totalrainha = 8;
    const int limiteBaixo = 2;
    const int limiteDireita = 1;

    printf("Movimeto da Torre:\n");
    moverTorre(1, totaltorre);
    
    printf("\n-----------------\n\n");
    
    printf("Movimeto do Bispo:\n");
    moverBispo(1, totalbispo); 
    
    printf("\n-----------------\n\n");
    
    printf("Movimeto da Rainha:\n");    
    moverRainha(1, totalrainha); 
    
    printf("\n-----------------\n\n");  
    moverCavalo(limiteBaixo, limiteDireita);
    
    printf("\n-----------------\n\n");

return 0;
}