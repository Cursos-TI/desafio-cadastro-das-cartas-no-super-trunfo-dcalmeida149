#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Aluno: Daniel Almeida
// Matricula: 202503008515

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    
    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
    // Entrada de dados para a primeira carta
    printf("Digite a letra do Estado (A-H) para a primeira carta: ");
    scanf(" %c", &estado1);
    printf("Digite o Código da Carta (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Digite o Nome da Cidade: ");
    scanf(" %49s", nomeCidade1);
    printf("Digite a População: ");
    scanf(" %d", &populacao1);
    printf("Digite a Área (km²): ");
    scanf(" %f", &area1);
    printf("Digite o PIB (bilhões de reais): ");
    scanf(" %f", &pib1);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos1);
    
    // Entrada de dados para a segunda carta
    printf("\nDigite a letra do Estado (A-H) para a segunda carta: ");
    scanf(" %c", &estado2);
    printf("Digite o Código da Carta (ex: B03): ");
    scanf(" %s", codigo2);
    printf("Digite o Nome da Cidade: ");
    scanf(" %49s", nomeCidade2);
    printf("Digite a População: ");
    scanf(" %d", &populacao2);
    printf("Digite a Área (km²): ");
    scanf(" %f", &area2);
    printf("Digite o PIB (bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos2);
    
    // Exibição das informações da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    
    // Exibição das informações da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    return 0;
}
