#include <stdio.h>
#include <string.h>

int main() {
    char carta, codigoCarta[3];
    char nomeCidade[100];
    int populacao, nPontos;
    float area, pib;

    printf("Digite uma letra entre 'A' e 'H' para representar um dos oito estados: ");
    scanf(" %c", &carta);
    printf("Digite a letra do estado seguida de um número de 01 a 04(ex:A01,B02): ");
    scanf(" %s", codigoCarta);
    printf("Digite o nome da cidade: ");
    getchar(); 
    fgets(nomeCidade, sizeof(nomeCidade), stdin);
    nomeCidade[strcspn(nomeCidade, "\n")] = 0; 
    
    printf("Informe o número de habitantes da cidade: ");
    scanf("%d", &populacao);
    printf("Informe a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area);
    printf("Informe o Produto Interno Bruto(PIB) da cidade: ");
    scanf("%f", &pib);
    printf("Informe o números de pontos turísticos da cidade: ");
    scanf("%d", &nPontos);

    printf("\n");

    char car, codCarta[3];
    char nomeCidade2[100];
    int populacao2, nPontos2;
    float area2, pib2;

    printf("Digite uma letra entre 'A' e 'H' para representar um dos oito estados: ");
    scanf(" %c", &car);
    printf("Digite a letra do estado seguida de um número de 01 a 04(ex:A01,B02): ");
    scanf(" %s", codCarta);
    printf("Digite o nome da cidade: ");
    getchar(); 
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

    printf("Informe o número de habitantes da cidade: ");
    scanf("%d", &populacao2);
    printf("Informe a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);
    printf("Informe o Produto Interno Bruto(PIB) da cidade: ");
    scanf("%f", &pib2);
    printf("Informe o números de pontos turísticos da cidade: ");
    scanf("%d", &nPontos2);

    printf("\n\n***************************************\n\n");
  
    printf("Carta 1:\n");
    printf("Estado: %c\n", carta);
    printf("Código da cidade: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", nPontos);

    float densidadePopulacional = populacao/ area;
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
  
    float pibPerCapita = pib / populacao * 1000000000;
    printf("PIB per capita: %.2f reais\n", pibPerCapita);
    
    printf("\n");
  
    printf("Carta 2:\n");
    printf("Estado: %c\n", car);
    printf("Código da cidade: %s\n", codCarta);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", nPontos2);

    float densidadePopulacional2 = populacao2 / area2;
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);

    float pibPerCapita2 = pib2 / populacao2 * 1000000000;  
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);

    printf("\n\n");

    printf("Comparação de cartas (Atributo: PIB Per Capita):\n\n");

    printf("Carta 1 - %s: %.2f\n", nomeCidade, pibPerCapita);
    printf("Carta 2 - %s: %.2f\n", nomeCidade2, pibPerCapita2);

    if(pibPerCapita > pibPerCapita2)
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade);
    else
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);

    return 0;
}
