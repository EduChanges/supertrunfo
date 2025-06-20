#include <stdio.h> 

int main(){
        char aluno[50];
        int idade, matricula;
        float altura;

        printf("Digite seu nome: \n");
        fgets(aluno, sizeof(aluno), stdin);

        printf("Digite sua idade: \n");
        scanf("%d", &idade);

        printf("Digite sua matricula: \n");
        scanf("%d", &matricula); 

        printf("Digite sua altura: \n");
        scanf("%f", &altura);

        printf("\nResumo\n");
        printf("\nAluno: %s\n", aluno);
        printf("\nIdade: %d\n", idade);
        printf("\nMatricula: %d\n", matricula);
        printf("\nAltura: %.2f", altura);

        return (0);
}







;