#include <stdio.h>
#include <string.h>

int main() {
    // ==============================
    // Variáveis - Carta 1
    // ==============================
    char estado1;
    char codigo1[10];
    char cidade1[50];

    unsigned long int populacao1;   // NÍVEL MESTRE: população maior
    float area1, pib1;
    int pontos1;

    float densidade1, pibPerCapita1, superPoder1;

    // ==============================
    // Variáveis - Carta 2
    // ==============================
    char estado2;
    char codigo2[10];
    char cidade2[50];

    unsigned long int populacao2;   // NÍVEL MESTRE: população maior
    float area2, pib2;
    int pontos2;

    float densidade2, pibPerCapita2, superPoder2;

    // ==============================
    // Entrada - Carta 1
    // ==============================
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta: ");
    scanf("%9s", codigo1);

    getchar(); // limpa buffer

    printf("Nome da cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // ==============================
    // Entrada - Carta 2
    // ==============================
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta: ");
    scanf("%9s", codigo2);

    getchar(); // limpa buffer

    printf("Nome da cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // ==============================
    // Cálculos (densidade e PIB per capita)
    // ==============================
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / (float)populacao1;

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;

    // ==============================
    // Super Poder (atenção conversão de tipos)
    // Super Poder = pop + area + pib + pontos + pibPerCapita + (1/densidade)
    // ==============================
    superPoder1 =
        (float)populacao1 +
        area1 +
        pib1 +
        (float)pontos1 +
        pibPerCapita1 +
        (1.0f / densidade1);

    superPoder2 =
        (float)populacao2 +
        area2 +
        pib2 +
        (float)pontos2 +
        pibPerCapita2 +
        (1.0f / densidade2);

    // ==============================
    // Exibição das cartas (mantém níveis anteriores)
    // ==============================
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // ==============================
    // Comparações (sem if/else)
    // 1 = Carta 1 vence, 0 = Carta 2 vence
    // Densidade: menor vence
    // Outros: maior vence
    // ==============================
    int vencePop = (populacao1 > populacao2);
    int venceArea = (area1 > area2);
    int vencePIB = (pib1 > pib2);
    int vencePontos = (pontos1 > pontos2);
    int venceDensidade = (densidade1 < densidade2); // menor vence
    int vencePibPerCapita = (pibPerCapita1 > pibPerCapita2);
    int venceSuperPoder = (superPoder1 > superPoder2);

    const char *vencedor[2] = {"Carta 2", "Carta 1"}; // indexa pelo 0/1

    printf("\n===== Comparacao de Cartas =====\n");
    printf("Populacao: %s venceu (%d)\n", vencedor[vencePop], vencePop);
    printf("Area: %s venceu (%d)\n", vencedor[venceArea], venceArea);
    printf("PIB: %s venceu (%d)\n", vencedor[vencePIB], vencePIB);
    printf("Pontos Turisticos: %s venceu (%d)\n", vencedor[vencePontos], vencePontos);
    printf("Densidade Populacional: %s venceu (%d)\n", vencedor[venceDensidade], venceDensidade);
    printf("PIB per Capita: %s venceu (%d)\n", vencedor[vencePibPerCapita], vencePibPerCapita);
    printf("Super Poder: %s venceu (%d)\n", vencedor[venceSuperPoder], venceSuperPoder);

    return 0;
}
