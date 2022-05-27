#include <stdio.h>
int main(int argc, char const *argv[])
{
    int cont;
    printf("\nDigite um numero para contagem regressiva: ");
    scanf("%d", &cont);
    for(cont; cont>=1; cont--){
        printf("\n%d", cont);
    }

    return 0;
}
