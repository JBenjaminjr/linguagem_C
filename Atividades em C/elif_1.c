#include <stdio.h>
int main(int argc, char const *argv[])
{
    float n1;
    printf("\nDigite a media do aluno: ");
    scanf("%f", &n1);

    if (n1 >= 60){
        printf("\nAPROVADO!!!");
    }else {
        if (n1 >= 50){
            printf("\nRECUPERACAO!!!");
        }else {
            printf("\nREPROVADO");
        }
    }

       

    return 0;
}
