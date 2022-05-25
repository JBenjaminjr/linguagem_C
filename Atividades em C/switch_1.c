#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;

    printf("Digite a opcao desejada:");
    printf("\n(1)Saldo: ");
    printf("\n(2)Saque: ");
    printf("\n(3)Extrato: ");
    printf("\n(4)Voltar menu: ");
    printf("\nOpcao desejada n:");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Saldo");
        break;
    case 2:
        printf("Saque");
        break;
    case 3:
        printf("Extrato");
        break;
    case 4:
        printf("Voltar menu");
        break;

    default:
        printf("Menu Invalido");
        break;
    }


   
    return 0;

}