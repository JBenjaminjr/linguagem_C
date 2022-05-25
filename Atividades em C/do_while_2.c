#include <stdio.h>
int main(int argc, char const *argv[])
{
    float m1, m2, result;
    int resp;
    m1 = 0;
    m2 = 0;
    result = 0;
    printf("\nCALCULO DE METROS QUADRADOS");
    printf("\nOs valores devem ser escritos com os valores decimais\nex: 2.0");
    do{
        printf("\nDigite a primeira medida: ");
        scanf("%f", &m1);
        printf("\nDigite a segunda medida: ");
        scanf("%f", &m2);
        result = m1 * m2;
        printf("\nA medida total é de: %.2fm2", result);
        scanf("%f", &result);
        printf("Para finalizar digite 1\nPara um novo calculo digite 2");
    }while (resp == 1);

    return 0;
}
