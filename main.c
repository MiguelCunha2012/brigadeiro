#include <stdio.h>

int main () {
    int quantidadeReceita;
    int quantidadeLeiteCondensado = 1;
    int quantidadeManteiga = 1;
    int quantidadeChocolate = 4;
    int totalLeiteCondensado;
    int totalManteiga;
    int totalChocolate;
    printf("Digite quantas receitas de bricadeiro voce deseja:");
    scanf("%d", &quantidadeReceita );
    totalLeiteCondensado = quantidadeReceita * quantidadeLeiteCondensado;
    totalManteiga = quantidadeReceita * quantidadeManteiga;
    totalChocolate = quantidadeReceita * quantidadeChocolate;
    printf("========================================================== \n");
    printf("Quantidade de receitas: %d\n", quantidadeReceita);
    printf("Voce ira usar:\n");
    printf("Leite Condensado: %d\n", totalLeiteCondensado );
    printf("Manteiga: %d\n", totalManteiga);
    printf("Chocolate em po: %d\n", totalChocolate);
    printf("==========================================================");

    return 0;
}