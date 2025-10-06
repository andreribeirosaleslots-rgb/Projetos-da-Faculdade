#include <stdio.h>

int main() {

        char produtoA[30] = "Produto A", produtoB[30] = "Produto B";
        unsigned int estoqueA = 1000, estoqueB = 2000;
        unsigned int estoqueminimoA = 500, estoqueminimoB = 2500;
        float valorA = 10.50, valorB = 20.40;
        double valortotalA, valortotalB;
        int resultadoA, resultadoB;

        printf("Produto %s tem estoque %u e o valor unitario e R$ %.2f\n", produtoA, estoqueA, valorA);
        printf("Produto %s tem estoque %u e o valor unitario e R$ %.2f\n", produtoB, estoqueB, valorB);

            resultadoA = estoqueA > estoqueminimoA;
            resultadoB = estoqueB > estoqueminimoB;

        printf("O produto %s tem estoque minimo %d\n", produtoA, resultadoA);
        printf("O produto %s tem estoque minimo %d\n", produtoB, resultadoB);


        printf("O valor total de A (R$ %.2f) e maior que o valor total de B (R$ %.2f)?: %d\n", 
         estoqueA * valorA,
         estoqueB * valorB,
        (estoqueA * valorA) > 
        (estoqueB * valorB));
        
        
        return 0;

}