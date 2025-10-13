#include <stdio.h>

int main(){

    int index;
    char * nomesAlunos [3][3] =  {
        
        {"Aluno 1", "Pt: 30, Mat: 90"},
        {"Aluno 2", "Pt: 60, Mat: 60"},
        {"Aluno 3", "Pt: 90, Mat: 30"}
    };

    printf("Digite o numero do aluno que queira ver a nota...\n");
    printf("Para aluno 0, digite 0\n");
    printf("Para aluno 1, digite 1\n");
    printf("Para aluno 2, digite 2\n");
    scanf("%d", &index);
    printf("A nota do %s é %s %s\n", nomesAlunos[index][0],nomesAlunos[index][1]);

return 0;
}