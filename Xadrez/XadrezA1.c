#include <stdio.h>

int main(){

   int bispo = 1;
   int rainha = 1;
 
   //movimento da tore com For 
   printf("Movimento da Torre:\n");
   for (int torre = 1; torre <=5 ; torre++){
   printf("Movimento %d: Direita\n", torre);}

   printf("\n-----------------\n\n");
 
   //Movimento do bispo com While
   printf("Movimento do Bispo:\n");
   while(bispo <= 5){
   printf("Movimento %d: Diagonal Direita\n", bispo);
   bispo++;}

   printf("\n-----------------\n\n");
   
   //Movimento da rainha com Do-While 
   printf("Movimento da Rainha:\n");
   do{
   printf("Movimento %d: Esquerda\n", rainha);
   rainha++;}
   while (rainha <= 8);

   printf("\n-----------------\n"); //<---- se paradores de linha
   
  
   return 0;
}