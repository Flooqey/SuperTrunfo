#include <stdio.h>
#include <stdlib.h>

int main(){

    // Declara��o das vari�veis
    char estado1[3];
    char estado2[3];
    char codigo1[3];
    char codigo2[3];
    char nomeCidade1[30];
    char nomeCidade2[30];
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    float pibcapita1;
    float pibcapita2;
    float denspopulacional1;
    float denspopulacional2;
    int pontosTur1;
    int pontosTur2;



    // Entrada de dados para a primeira cidade
    printf("Bem-vindo ao cadastrador de cartas Super Trunfo! Comece digitando uma letra de 'A' a 'H':\n");
    scanf("%s", estado1);

    printf("�timo! Agora digite um n�mero de 01 a 04 que ser� o c�digo da carta:\n");
    scanf("%s", codigo1);

    printf("Perfeito! Agora digite o nome da cidade:\n");
    scanf(" %[^\n]", nomeCidade1);

    printf("Certo! Agora digite a popula��o da cidade:\n");
    scanf("%d", &populacao1);

    printf("Agora digite a �rea em quil�metros quadrados:\n");
    scanf("%f", &area1);

    printf("Agora digite o PIB da cidade:\n");
    scanf("%f", &pib1);

    printf("Por fim, digite a quantidade de pontos tur�sticos:\n");
    scanf("%d", &pontosTur1);

    // Entrada de dados para a segunda cidade
    printf("�timo! Voc� terminou o cadastro da primeira cidade. Agora vamos cadastrar a segunda. Digite uma letra de 'A' a 'H':\n");
    scanf("%s", estado2);

    printf("�timo! Agora digite um n�mero de 01 a 04 que ser� o c�digo da carta:\n");
    scanf("%s", codigo2);

    printf("Perfeito! Agora digite o nome da cidade:\n");
    scanf(" %[^\n]", nomeCidade2);

    printf("Certo! Agora digite a popula��o da cidade:\n");
    scanf("%d", &populacao2);

    printf("Agora digite a �rea em quil�metros quadrados:\n");
    scanf("%f", &area2);

    printf("Agora digite o PIB da cidade:\n");
    scanf("%f", &pib2);

    printf("Por fim, digite a quantidade de pontos tur�sticos:\n");
    scanf("%d", &pontosTur2);

    denspopulacional1 = populacao1 / area1;
    denspopulacional2 = populacao2 / area2;

    pibcapita1 = pib1 / populacao1;
    pibcapita2 = pib2 / populacao2;

    // Exibi��o dos dados cadastrados
    printf("\n�timo! Aqui est�o as informa��es das cartas:\n");
    printf("\nCarta 1\n");
    printf("Estado: %s\nC�digo: %s%s\nCidade: %s\nPopula��o: %d\n�rea: %.2f km�\nPIB: %.2f bilh�es de reais\nPontos tur�sticos: %d\n Densidade Populacional: %.2f \n PIB per Capita: %.2f \n",
           estado1, estado1, codigo1, nomeCidade1, populacao1, area1, pib1, pontosTur1, denspopulacional1, pibcapita1);

    printf("\nCarta 2\n");
    printf("Estado: %s\nC�digo: %s%s\nCidade: %s\nPopula��o: %d\n�rea: %.2f km�\nPIB: %.2f bilh�es de reais\nPontos tur�sticos: %d\n Densidade Populacional: %.2f \n PIB per Capita: %.2f \n",
        estado2, estado2, codigo2, nomeCidade2, populacao2, area2, pib2, pontosTur2, denspopulacional2, pibcapita2);

    return 0;
}
