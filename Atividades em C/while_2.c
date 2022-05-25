#include <stdio.h>
int main(int argc, char const *argv[])
{
    char parar;
    float nota;
    printf("\nDigite a nota final do aluno: ");
    scanf("%f", &nota);
    while(nota < 0 || nota > 10){
        printf("\nNota invalida! Digite a nota final do aluno: ");
        scanf("%f", &nota);
    }

    return 0;
}
