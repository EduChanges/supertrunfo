#include <stdio.h>

// Início da função principal
int main() {
    // Declaração das variáveis para a Carta 1
    char estado1[50];
    char codigo1[8];
    char cidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Declaração das variáveis para a Carta 2
    char estado2[50];
    char codigo2[8];
    char cidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // Coleta de dados da Carta cidade 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (california, Minas ,etc...): ");
    scanf(" %[^\n]", estado1);

    // não adicione "." nem "," (pontos e virgulas) ao escrever qualquer número

    printf("Código da Carta (ex: A01): ");
    scanf(" %s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1); // atualizado: com espaços

    printf("População: ");
    scanf(" %d", &populacao1);

    printf("Área em km²: ");
    scanf(" %f", &area1);

    printf("PIB (em bilhões): ");
    scanf(" %f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    // Coleta de dados da Carta cidade 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (california, Minas ,etc...): ");
    scanf(" %[^\n]", estado2); // atualizado: com espaços

    printf("Código da Carta (ex: B02): ");
    scanf(" %s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2); // atualizado: com espaços

    printf("População: "); 
    scanf(" %d", &populacao2);

    printf("Área em km²: ");
    scanf(" %f", &area2);

    printf("PIB (em bilhões): ");
    scanf(" %f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    // Impressão dos dados da Carta 1
    printf("\n\n=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Impressão dos dados da Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("PIB: %.2f bilhões de reais\n", pib2);

    return 0; // final do programa
}
