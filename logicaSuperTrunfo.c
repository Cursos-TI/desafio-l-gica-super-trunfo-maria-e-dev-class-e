#include <stdio.h>

int main() {
    // Agrupei as variáveis para economizar espaço e melhorar a leitura
    char name1[50], album1[50], name2[50], album2[50];
    int sales1, grammys1, year1, sales2, grammys2, year2;
    float streams1, streams2, success1, success2; // success será igual a sales (vendas estimadas / streams no spotify)
    char s_suf1, st_suf1, s_suf2, st_suf2;
    /* s_suf1 e st_suf1 (char) servem como "coletores" para o caractere que vem após o número (ex: o 'm' de 300m).
     Elas limpam o buffer do teclado, impedindo que letras fiquem "presas" e façam o próximo scanf falhar ao tentar ler um número.*/

    // Cadastro - DIVA 1
    printf("=== First Diva Registration ===\n");
    printf("Name: ");
    scanf(" %[^\n]", name1);
    printf("Debut album: ");
    scanf(" %[^\n]", album1);
    printf("Total of estimated sales (ex: 300m): ");
    scanf("%d%c", &sales1, &s_suf1); //coloquei _suffix e %c pra ler o m de milhão
    printf("Total of Grammys won: ");
    scanf("%d", &grammys1);
    printf("Total of Spotify Streams (ex: 40m): ");
    scanf("%f%c", &streams1, &st_suf1); //coloquei _suffix e %c pra ler o m de milhão
    printf("Birth year: ");
    scanf("%d", &year1);

    // Cálculo Diva 1 (Vendas / Streams)
    success1 = (float)sales1 / streams1;
    /* resolvi fazer essa conta pra deixar uma competição mais complexa, é melhor do que simplesmente comparar vendas ou numero de grammys com < ou > fica mais dicil de dar empate */

    // Cadastro - DIVA 2
    printf("\n=== Second Diva Registration ===\n");
    printf("Name: ");
    scanf(" %[^\n]", name2);
    printf("Debut album: ");
    scanf(" %[^\n]", album2);
    printf("Total of estimated sales (ex: 300m): ");
    scanf("%d%c", &sales2, &s_suf2); //coloquei _suffix e %c pra ler o m de milhão
    printf("Total of Grammys won: ");
    scanf("%d", &grammys2);
    printf("Total of Spotify Streams (ex: 40m): ");
    scanf("%f%c", &streams2, &st_suf2); //coloquei _suffix e %c pra ler o m de milhão
    printf("Birth year: ");
    scanf("%d", &year2);

    // Cálculo Diva 2
    success2 = (float)sales2 / streams2;

    // --- Comparação de Atributo: SUCCESS ---
    // Regra: O MENOR valor vence. o menor valor pois, ganha quem precisou de menos streams para gerar uma venda, success representa eficiência.

    printf("\nDiva comparison (Atribute: Success - Sales/Streams):\n\n");
    printf("D.I.V.A. 1 - %s: %.4f\n", name1, success1);
    printf("D.I.V.A. 2 - %s: %.4f\n", name2, success2);

    // Lógica de decisão: No caso de success, usamos o operador '<'
    if (success1 < success2) {
        printf("Result: D.I.V.A. 1 (%s) won!\n", name1);
        // O 'if' testa se o valor da Diva 1 é menor; se verdadeiro, ela vence.
    } else if (success2 < success1) {
        printf("Result: D.I.V.A. 2 (%s) won!\n", name2);
        // O 'else if' testa a condição oposta (Diva 2 menor) caso a primeira seja falsa.
    } else {
        printf("Result: it's a draw!\n");
        // O 'else' trata o único cenário restante: quando os valores são iguais (empate).
    }

    return 0;
}