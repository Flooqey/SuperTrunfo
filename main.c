#include <stdio.h>
#include <stdlib.h>
int main(){

    // Declaração das variáveis
    char estado1[3];
    char estado2[3];
    char codigo1[3];
    char codigo2[3];
    char nomeCidade1[30];
    char nomeCidade2[30];
    unsigned int populacao1;
    unsigned int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    float pibcapita1;
    float pibcapita2;
    float denspopulacional1;
    float denspopulacional2;
    float superPoder1;
    float superPoder2;
    int pontosTur1;
    int pontosTur2;



    // Entrada de dados para a primeira cidade
    printf("Bem-vindo ao cadastrador de cartas Super Trunfo! Comece digitando uma letra de 'A' a 'H':\n");
    scanf("%s", estado1);

    printf("Ótimo! Agora digite um número de 01 a 04 que será o código da carta:\n");
    scanf("%s", codigo1);

    printf("Perfeito! Agora digite o nome da cidade:\n");
    getchar();
    scanf(" %[^\n]", nomeCidade1);

    printf("Certo! Agora digite a população da cidade:\n");
    scanf("%d", &populacao1);

    printf("Agora digite a área em quilômetros quadrados:\n");
    scanf("%f", &area1);

    printf("Agora digite o PIB da cidade:\n");
    scanf("%f", &pib1);

    printf("Por fim, digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosTur1);

    // Entrada de dados para a segunda cidade
    printf("Ótimo! Você terminou o cadastro da primeira cidade. Agora vamos cadastrar a segunda. Digite uma letra de 'A' a 'H':\n");
    scanf("%s", estado2);

    printf("Ótimo! Agora digite um número de 01 a 04 que será o código da carta:\n");
    scanf("%s", codigo2);

    printf("Perfeito! Agora digite o nome da cidade:\n");
    getchar();
    scanf(" %[^\n]", nomeCidade2);

    printf("Certo! Agora digite a população da cidade:\n");
    scanf("%d", &populacao2);

    printf("Agora digite a área em quilômetros quadrados:\n");
    scanf("%f", &area2);

    printf("Agora digite o PIB da cidade:\n");
    scanf("%f", &pib2);

    printf("Por fim, digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosTur2);

   denspopulacional1 = populacao1 / area1;
    denspopulacional2 = populacao2 / area2;
    pibcapita1 = pib1 / populacao1;
    pibcapita2 = pib2 / populacao2;
    superPoder1 = populacao1 + area1 + pib1 + pontosTur1 + pibcapita1 + (1 / denspopulacional1);
    superPoder2 = populacao2 + area2 + pib2 + pontosTur2 + pibcapita2 + (1 / denspopulacional2);


    // Exibição dos dados cadastrados
    printf("\nÓtimo! Aqui estão as informações das cartas:\n");
    printf("\nCarta 1\n");
    printf("Estado: %s\nCódigo: %s%s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nPontos turísticos: %d\n Densidade Populacional: %.2f \n PIB per Capita: %.2f \n",
           estado1, estado1, codigo1, nomeCidade1, populacao1, area1, pib1, pontosTur1, denspopulacional1, pibcapita1);

    printf("\nCarta 2\n");
    printf("Estado: %s\nCódigo: %s%s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nPontos turísticos: %d\n Densidade Populacional: %.2f \n PIB per Capita: %.2f \n \n",
        estado2, estado2, codigo2, nomeCidade2, populacao2, area2, pib2, pontosTur2, denspopulacional2, pibcapita2);

       printf("\nComparação de Cartas:\n");
    printf("População: Vencedor - %s\n", (populacao1 > populacao2) ? nomeCidade1 : nomeCidade2);
    printf("Área: Vencedor - %s\n", (area1 > area2) ? nomeCidade1 : nomeCidade2);
    printf("PIB: Vencedor - %s\n", (pib1 > pib2) ? nomeCidade1 : nomeCidade2);
    printf("Pontos Turísticos: Vencedor - %s\n", (pontosTur1 > pontosTur2) ? nomeCidade1 : nomeCidade2);
    printf("Densidade Populacional: Vencedor - %s\n", (denspopulacional1 < denspopulacional2) ? nomeCidade1 : nomeCidade2);
    printf("PIB per Capita: Vencedor - %s\n", (pibcapita1 > pibcapita2) ? nomeCidade1 : nomeCidade2);
    printf("Super Poder: Vencedor - %s\n", (superPoder1 > superPoder2) ? nomeCidade1 : nomeCidade2);
    return 0;
}
