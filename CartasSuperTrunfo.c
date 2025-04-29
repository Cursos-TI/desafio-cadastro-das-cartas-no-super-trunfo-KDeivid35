#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    int populacao, pontos_turisticos, carta, populacao2, pontos_turisticos2, carta2;
    float area, PIB, area2, PIB2;
    char nome_cidade[50], nome_cidade2[50];
    char estado, estado2;
    char codigo[4], codigo2[4];

    // CARTA 1
    printf("BEM VINDO AO SUPER TRUNFO\n");
    printf("--------------------------\n");
    printf("Cadastre sua primeira carta:\n");

    carta = 1;
    printf("Informe o Estado (de A a H):\n");
    scanf(" %c", &estado);  // Espaço antes de %c para ignorar o \n 

    printf("Informe o código da carta (ex: A01):\n");
    scanf("%s", codigo);
    getchar();  // limpa o \n  do buffer

    printf("Informe o nome da cidade:\n");
    fgets(nome_cidade, sizeof(nome_cidade), stdin);
    nome_cidade[strcspn(nome_cidade, "\n")] = '\0';

    printf("Informe a População(somente os números sem separador como . ou ,):\n");
    scanf("%i", &populacao);

    printf("Informe a Área (em km²):\n");
    scanf("%f", &area);

    printf("Informe o PIB:\n");
    scanf("%f", &PIB);

    printf("Informe o número de pontos turísticos:\n");
    scanf("%i", &pontos_turisticos);

    // CARTA 2
    printf("\nCadastre sua segunda carta:\n");
    carta2 = 2;

    printf("Informe o Estado (de A a H):\n");
    scanf(" %c", &estado2);

    printf("Informe o código da carta (ex: A01):\n");
    scanf("%s", codigo2);
    getchar();

    printf("Informe o nome da cidade:\n");
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);
    nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0';

    printf("Informe a População(somente os números sem separador como . ou ,):\n");
    scanf("%i", &populacao2);

    printf("Informe a Área (em km²):\n");
    scanf("%f", &area2);

    printf("Informe o PIB:\n");
    scanf("%f", &PIB2);

    printf("Informe o número de pontos turísticos:\n");
    scanf("%i", &pontos_turisticos2);

    // Mostrar as cartas
    printf("\nCARTAS ADICIONADAS:\n");
    printf("----------------------------------\n");
    printf("Carta: %i \n", carta);
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da cidade: %s \n", nome_cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f \n", PIB);
    printf("Pontos Turísticos: %i \n", pontos_turisticos);

    printf("----------------------------------\n");

    printf("Carta: %i \n", carta2);
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nome_cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f \n", PIB2);
    printf("Pontos Turísticos: %i \n", pontos_turisticos2);

    return 0;
}
