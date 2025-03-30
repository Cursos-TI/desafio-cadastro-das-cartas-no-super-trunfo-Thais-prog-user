#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    // Definições de variáveis para cada atributo das cidades.
    char estado1 = 'A', estado2 = 'B';
    char codigo1[10] = "A01", codigo2[10] = "B01";
    char nomeCidade1[20] = "Contagem", nomeCidade2[20] = "Guarulhos";
    int populacao1 = 621863, populacao2 = 1292;
    float area1 = 194.746, area2 = 318;
    float pib1 = 36.479, pib2 = 42.2;
    int pontosTuristicos1 = 6 , pontosTuristicos2 = 35;

    
    // Exibição dos Dados das Cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área ocupada: %.3f km²\n", area1);
    printf("PIB: R$ %.2f bilhões de reais\n", pib1);
    printf("Quantidade de pontos turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área ocupada: %.3f km²\n", area2);
    printf("PIB: R$ %.2f bilhões de reais\n", pib2);
    printf("Quantidade de pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}
