#include <stdio.h>
int main(int argc, char const *argv[])
{
    float valor;
    float soma = 0;
    int opcao;
    do{
        printf("\nMENU DE OPCOES\n(1)Deposito\n(2)Saque\n(3)Saldo\n(4)Sair");
        printf("\nInforme uma opcao: ");
        scanf("%f", &opcao);
        switch(opcao) {
            case 1:
            printf("\nInforme o valor: ");
            scanf("%f", valor);
            
            break;
            case 2:
            printf("\nInforme o valor: ");
            scanf("%f", valor);
            
            break;
            case 3:
            printf("\n Saldo atual = R$%.2f", soma);
            scanf("%f", &soma);
            break;
            case 4:
            printf("\n Saindo...");
            break;
            default:
            printf("\nOpcao invalida!");
            
        }
    }while (opcao =4);
    
    {
        printf("\n\nFim das operações!");
    }
    
    return 0;
}
