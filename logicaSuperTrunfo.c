#include <stdio.h>

int main() {
    // Agrupando variáveis para economizar espaço e melhorar a leitura
    char name1[50], album1[50], name2[50], album2[50];
    int sales1, grammys1, year1, sales2, grammys2, year2;
    float streams1, streams2, success1, success2; // success é igual a sales (vendas estimadas / streams no spotify)
    char s_suf1, st_suf1, s_suf2, st_suf2;
    int option;
    // s_suf1 e st_suf1 (char) servem como "coletores" para o caractere que vem após o número (ex: o 'm' de 300m).
    // Elas limpam o buffer do teclado, impedindo que letras fiquem "presas" e façam o próximo scanf falhar ao tentar ler um número.

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

    // aqui começa o menu do desafio
    printf("\n ===Menu===\n");
    printf("Choose an attribute to compare:\n");
    printf("1. Estimated Sales\n");
    printf("2. Grammys\n");
    printf("3. Total of streams on spotify\n");
    printf("4. Success (Sales/Streams)\n");

        printf("\n Option: \n");
        scanf("%d",&option);

    //aplicando o operador ternário na estruturação do switch
        switch (option) {

            case 1:
                printf("\nSales Comparison\n");
                printf("%s: %dm\n", name1, sales1);
                printf("%s: %dm\n", name2, sales2);

                if (sales1 == sales2) {
                    printf("It's a draw!\n");
                } else {
                    printf("Winner is %s\n", (sales1 > sales2) ? name1 : name2);
                }
                break;

            case 2:
                printf("\nGrammys Comparison\n");
                printf("%s: %dm\n", name1, grammys1);
                printf("%s: %dm\n", name2, grammys2);

                if (grammys1 == grammys2) {
                    printf("It's a draw!\n");
                } else {
                    printf("Winner is %s\n", (grammys1 > grammys2) ? name1 : name2);
                }
                break;

            case 3:
                printf("\nStreams Comparison\n");
                printf("%s: %fm\n", name1, streams1);
                printf("%s: %fm\n", name2, streams2);

                if (streams1 == streams2) {
                    printf("It's a draw!\n");
                } else {
                    printf("Winner is %s\n", (streams1 > streams2) ? name1 : name2);
                }
                break;

            case 4:
                printf("\nSuccess Comparison\n");
                printf("%s: %fm\n", name1, success1);
                printf("%s: %fm\n", name2, success2);

                if (success1 == success2) {
                    printf("It's a draw!\n");
                } else {
                    // Menor valor vence aqui (Sales/Streams)
                    printf("Winner is %s\n", (success1 < success2) ? name1 : name2);
                }
                break;

            default:
                printf("\nInvalid option\n");
                break;
        }

    return 0;
    }

