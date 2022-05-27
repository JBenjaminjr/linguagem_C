#include <stdio.h>
int main(int argc, char const *argv[])
{
    int linha, coluna;
    int matriz[3][3];

    for (linha=0; linha <3; linha++){
        for (coluna =0; coluna<3; coluna++){
            printf("\nDigitar os valoresda matriz para\n[Linha %d, Coluna %d]; ", linha +1, coluna +1);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    printf("\nVeja sua matriz\n");
    for(linha =0; linha <=2; linha++){
        for(coluna =0; coluna<=2; coluna++){

        }
        printf("\n");
    }
    return 0;
}
