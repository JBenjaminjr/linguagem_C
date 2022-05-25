#include <stdio.h>
int main(int argc, char const *argv[])
{
    char parar;
    float nota;
    do{
        printf("\nDigite a nota final do aluno: ");
        scanf("%f", &nota);
    }while(nota < 0 || nota > 10);
    
    return 0;
}
