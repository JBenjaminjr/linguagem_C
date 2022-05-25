#include <stdio.h>
int main(int argc, char const *argv[])
{
   int orcamento;
   printf("Digite o valor do orçamento para viagem: ");
   scanf("%d", &orcamento);
   if (orcamento >= 10000){
       printf("Viagem aprovada");
   }else{
       printf("Orçamento abaixo da meta!");
   }
    return 0;
}
