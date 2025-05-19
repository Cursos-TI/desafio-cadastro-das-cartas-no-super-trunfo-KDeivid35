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
    //variaveis calculo densidade e pib per capita
    float dens_pop, pib_capt, dens_pop2, pib_capt2;
    // variaveis calculo superpoder
    float super_poder1, super_poder2;

    // CARTA 1
    printf("BEM VINDO AO SUPER TRUNFO\n");
    printf("--------------------------\n");
    printf("Cadastre sua primeira carta:\n");

    carta = 1;
    printf("Informe o Estado (de A a H):\n");
    scanf(" %c", &estado);  // Espaço antes de %c para ignorar o \n 

    printf("Informe o código da carta (ex: A01):\n");
    scanf("%3s", codigo); 
    getchar();  // limpa o \n  do buffer

    printf("Informe o nome da cidade:\n");
    fgets(nome_cidade, sizeof(nome_cidade), stdin);
    nome_cidade[strcspn(nome_cidade, "\n")] = '\0';

    printf("Informe a População:\n");
    scanf("%d", &populacao);

    printf("Informe a Área (em km²) [use ponto como separador decimal]:\n");
    scanf("%f", &area);

    printf("Informe o PIB(use ponto como separador decimal):\n");
    scanf("%f", &PIB);

    printf("Informe o número de pontos turísticos:\n");
    scanf("%i", &pontos_turisticos);

    // calcular a densidade populacional e o pib per capita da carta 1

    dens_pop = (float) populacao/area;
    pib_capt = (float)(PIB * 1000000000.0) / populacao;//transformando o pib em milhão para o calculo funcionar

    // Cálculo do Super Poder da carta 1
    super_poder1 = populacao + area + PIB + pontos_turisticos + pib_capt + (1.0 / dens_pop);

    // CARTA 2
    printf("\nCadastre sua segunda carta:\n");
    carta2 = 2;

    printf("Informe o Estado (de A a H):\n");
    scanf(" %c", &estado2);

    printf("Informe o código da carta (ex: A01):\n");
    scanf("%3s", codigo2);
    getchar();

    printf("Informe o nome da cidade:\n");
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);
    nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0';

    printf("Informe a População:\n");
    scanf("%d", &populacao2);

    printf("Informe a Área (em km²)[use ponto como separador decimal]:\n");
    scanf("%f", &area2);

    printf("Informe o PIB(use ponto como separador decimal):\n");
    scanf("%f", &PIB2);

    printf("Informe o número de pontos turísticos:\n");
    scanf("%i", &pontos_turisticos2);
    // calcular a densidade populacional e o pib per capita da carta 2

    dens_pop2 = (float) populacao2/area2;
    pib_capt2 = (float)(PIB2 * 1000000000.0) / populacao2;//transformando o pib em milhão para o calculo funcionar

    // Cálculo do Super Poder da carta 2
    super_poder2 = populacao2 + area2 + PIB2 + pontos_turisticos2 + pib_capt2 + (1.0 / dens_pop2);

    // Mostrar as cartas
    printf("\nCARTAS ADICIONADAS:\n");
    printf("----------------------------------\n");
    printf("Carta: %i \n", carta);
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da cidade: %s \n", nome_cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Pontos Turísticos: %i \n", pontos_turisticos);
    //mostrar a densidade e o pib per capita da carta 1
    printf("Densidade populacional: %.2f hab/km²\n", dens_pop);
    printf("PIB per capita: %.2f reais\n", pib_capt);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("----------------------------------\n");

    printf("Carta: %i \n", carta2);
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nome_cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Pontos Turísticos: %i \n", pontos_turisticos2);
    //mostrar a densidade e o pib per capita da carta 2
    printf("Densidade populacional: %.2f hab/km²\n", dens_pop2);
    printf("PIB per capita: %.2f reais\n", pib_capt2);
    printf("Super Poder: %.2f\n", super_poder2);
    // Comparações e Resultados
    printf("\nComparação de Cartas:\n");

    // População
    printf("População: %s venceu (%d)\n", populacao > populacao2 ? "Carta 1" : "Carta 2", populacao > populacao2 ? 0 : 1);

    // Área
    printf("Área: %s venceu (%d)\n", area > area2 ? "Carta 1" : "Carta 2", area > area2 ? 0 : 1);

    // PIB
    printf("PIB: %s venceu (%d)\n", PIB > PIB2 ? "Carta 1" : "Carta 2", PIB > PIB2 ? 0 : 1);

    // Pontos Turísticos
    printf("Pontos Turísticos: %s venceu (%d)\n", pontos_turisticos > pontos_turisticos2 ? "Carta 1" : "Carta 2", pontos_turisticos > pontos_turisticos2 ? 0 : 1);

    // Densidade Populacional 
    printf("Densidade Populacional: %s venceu (%d)\n", dens_pop < dens_pop2 ? "Carta 1" : "Carta 2", dens_pop < dens_pop2 ? 0 : 1);

    // PIB per capita
    printf("PIB per Capita: %s venceu (%d)\n", pib_capt > pib_capt2 ? "Carta 1" : "Carta 2", pib_capt > pib_capt2 ? 0 : 1);

    // Super Poder
    printf("Super Poder: %s venceu (%d)\n", super_poder1 > super_poder2 ? "Carta 1" : "Carta 2", super_poder1 > super_poder2 ? 0 : 1);


    return 0;
}
