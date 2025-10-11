#include <stdio.h>
 
int main() {
int i = 1;
        do {//loop externo
        
            int j = 1;//variavel
        
        do {//loop interno
        printf("%d\t", i * j);
            j++;//incremento do loop interno
        } 

        while (j <= 10);//condição do interno
        printf("\n");
        i++;//incremento loop externo
    } 
        while (i <= 10);//condição extreno

return 0;
}