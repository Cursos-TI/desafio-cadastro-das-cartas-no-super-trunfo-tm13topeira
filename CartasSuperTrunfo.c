#include <stdio.h>

// Uma carta

int main() {
    char estado; // de A-H
    char carta; // de 1 a 4
    char nome; // nome da cidade
    int populacao;
    float area; // km²
    float pib;
    int ponto;  // número de pontos turísticos
    
    printf("Digite o nome da cidade: \n");
    scanf(" %s", &nome);

    printf("Digite a população: \n");
    scanf(" %d", &populacao);

    printf("Digite a área em km²: \n");
    scanf(" %f", &area);

    printf("Digite o PIB: \n");
    scanf(" %f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &ponto);

    return 0;
}
