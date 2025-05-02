#include <stdio.h>

int main() {
    // Declaração de variáveis para armazenar os dados das cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];  // Para armazenar o código da carta (letra + número)
    char cidade1[100], cidade2[100]; // Para armazenar os nomes das cidades
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Leitura dos dados para a carta 1
    printf("Digite os dados da carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Código da Carta: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", cidade1);  // Para ler uma linha com espaços
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados para a carta 2
    printf("\nDigite os dados da carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código da Carta: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", cidade2);  // Para ler uma linha com espaços
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da Densidade Populacional e PIB per capita
    float densidadePopulacional1 = populacao1 / area1;
    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    // Definir o atributo a ser comparado (aqui será PIB)
    const char *atributo = "PIB"; // Alterar para o atributo que deseja comparar, como "População", "Área", etc.
    printf("\nComparação de cartas (Atributo: %s):\n", atributo);

    if (strcmp(atributo, "População") == 0) {
        printf("Carta 1 - %s: %d\n", cidade1, populacao1);
        printf("Carta 2 - %s: %d\n", cidade2, populacao2);

        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (populacao1 < populacao2) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate! Ambas as cidades têm a mesma população.\n");
        }
    }
    else if (strcmp(atributo, "Área") == 0) {
        printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
        printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);

        if (area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (area1 < area2) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate! Ambas as cidades têm a mesma área.\n");
        }
    }
    else if (strcmp(atributo, "PIB") == 0) {
        printf("Carta 1 - %s: %.2f bilhões de reais\n", cidade1, pib1);
        printf("Carta 2 - %s: %.2f bilhões de reais\n", cidade2, pib2);

        if (pib1 > pib2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (pib1 < pib2) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate! Ambos os PIBs são iguais.\n");
        }
    }
    else if (strcmp(atributo, "Densidade Populacional") == 0) {
        printf("Carta 1 - %s: %.2f habitantes/km²\n", cidade1, densidadePopulacional1);
        printf("Carta 2 - %s: %.2f habitantes/km²\n", cidade2, densidadePopulacional2);

        if (densidadePopulacional1 < densidadePopulacional2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (densidadePopulacional1 > densidadePopulacional2) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate! Ambas as cidades têm a mesma densidade populacional.\n");
        }
    }
    else if (strcmp(atributo, "PIB per capita") == 0) {
        printf("Carta 1 - %s: %.2f bilhões de reais por habitante\n", cidade1, pibPerCapita1);
        printf("Carta 2 - %s: %.2f bilhões de reais por habitante\n", cidade2, pibPerCapita2);

        if (pibPerCapita1 > pibPerCapita2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (pibPerCapita1 < pibPerCapita2) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate! Ambos os PIBs per capita são iguais.\n");
        }
    }

    return 0;
}
