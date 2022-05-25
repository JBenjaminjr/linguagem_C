#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num = 7;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    if(num % 2 == 0){
        printf("Numero par!!!");

    }else {
        printf("Numero Impar!!!");
    }
    return 0;
}
