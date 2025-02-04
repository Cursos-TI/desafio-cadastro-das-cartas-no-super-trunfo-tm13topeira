#include <stdio.h>

// Uma carta

int main() {
    char estado; // de A-H
    int carta; // de 1 a 4
    char nome[30]; // nome da cidade
    int populacao;
    float area; // km²
    float pib;
    int ponto;  // número de pontos turísticos
    
    // interação com o usuário  
    {
    printf("Digite a letra do estado (de A-H): \n");
    scanf("%s", &estado);

    printf("Digite o número da carta (de 1 a 5): \n");
    scanf("%d", &carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    printf("Digite a população: \n");
    scanf(" %d", &populacao);

    printf("Digite a área em km²: \n");
    scanf(" %f", &area);

    printf("Digite o PIB: \n");
    scanf(" %f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &ponto);}

    // resultado dos dados fornecidos pelo usuário
{
    printf("Estado: %c \n", estado);
    printf("Carta: %d \n", carta);
    printf("Nome da cidade: %s \n", nome);
    printf("População: %d \n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f \n", pib);
    printf("Número de pontos turísticos: %d \n", ponto);
}
    
    return 0;

}
