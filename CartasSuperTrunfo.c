#include <stdio.h>

int main() {

// Carta 1
    char Estado1[50];
    char codigocarta1[4];
    char Nomecidade1[50];   
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

// Carta 2
    char Estado2[50];
    char codigocarta2[4];
    char Nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

// Entrada Carta 1
    printf("Digite o Estado da Carta 1 (A-H):  \n");
    scanf(" %s", &Estado1);

    printf("Digite o nome da Cidade da Carta 1: \n");
    scanf(" %[^\n]", Nomecidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

 // Gera o código automaticamente (Carta 1)
/*
    Geração automática do código da carta:
    O código é formado pela primeira letra do estado + um número único para cada carta.
    Por exemplo, se Estado1 = "Acre", o código da Carta 1 será "A01".
    
    Para a Carta 2, se Estado2 = "Bahia", o código será "B02".
    Assim, o código identifica rapidamente a carta pelo estado e pelo número da carta.
*/

    codigocarta1[0] = Estado1[0]; // primeira letra
    codigocarta1[1] = '0';
    codigocarta1[2] = '1';
    codigocarta1[3] = '\0';

// Entrada Carta 2
    printf("Digite o Estado da Carta 2 (A-H):  \n");
    scanf(" %s", &Estado2);

    printf("Digite o nome da Cidade da Carta 2: \n");
    scanf(" %[^\n]", Nomecidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

 // Gera o código automaticamente (Carta 2)

    codigocarta2[0] = Estado2[0]; // primeira letra
    codigocarta2[1] = '0';
    codigocarta2[2] = '2';
    codigocarta2[3] = '\0';

 // Mostrar Carta 1
    printf("\nCarta 1:\n");
    printf("Código: %s\n", codigocarta1);
    printf("Estado: %s\n", Estado1);
    printf("Cidade: %s\n", Nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

 // Mostrar Carta 2
    printf("\nCarta 2:\n");
    printf("Código: %s\n", codigocarta2);
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", Nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    }
