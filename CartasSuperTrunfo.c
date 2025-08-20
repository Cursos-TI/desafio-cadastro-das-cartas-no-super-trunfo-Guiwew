#include <stdio.h>

int main (){
    //carta 1
    int populacao1,pontos_turisticos1;
    float area1,pib1,densidade1,pibcap1;
    char estado1,cidade1 [20], cartacode1 [20];

    //carta2
    int populacao2,pontos_turisticos2;
    float area2,pib2,densidade2,pibcap2;
    char estado2,cidade2[20], cartacode2[20];//não foi iniciado as variaveis pois não é nescéssario

    printf("Bem vindo ao super trunfo\n");

    printf("Vamos a primeira carta\n");//dados da carta 1

    printf("Inserir estado\n"); //estado carta 1
    scanf(" %c",&estado1);
    printf("Inserir o codico da carta\n");//codigo da carta 1
    scanf("%s", &cartacode1);
    printf("Inserir o nome da cidade\n");//nome da cidade 1
    scanf("%s", &cidade1);
    printf("Inserir a área\n");//área da cidade 1
    scanf("%f", &area1);
    printf("Inserir o PIB (em bilhoes)\n");//PIB da cidade 1
    scanf("%f", &pib1);
    printf("Inserir a população\n");//população da cidade 1
    scanf("%d", &populacao1);
    printf("Insetir quantitade de pontos turisticos\n");//pontos turisticos 1
    scanf("%d", &pontos_turisticos1);

    pibcap1 = (float) pib1 / populacao1;
    densidade1 = (float) area1 / populacao1;

    printf("Vamos para a segunda carta\n");//dados da carta 2

    printf("Insersir estado\n");//estado carta 2
    scanf(" %c",&estado2);
    printf("Inserir o codico da carta\n");//codigo da carta 2
    scanf("%s", &cartacode2);
    printf("Inserir o nome da cidade\n");//nome da cidade 2
    scanf("%s", &cidade2);
    printf("Inserir a área\n");//área da cidade 2
    scanf("%f", &area2);
    printf("Inserir o PIB (em bilhoes)\n");//PIB da cidade 2
    scanf("%f", &pib2);
    printf("Inserir a população\n");//população da cidade 2
    scanf("%d", &populacao2);
    printf("Insetir quantitade de pontos turisticos\n");//pontos turisticos 2
    scanf("%d", &pontos_turisticos2);
    
    pibcap2 = (float)(pib2 / populacao2) * 1000000;
    densidade2 = area2 / populacao2;

    //exibisao das cartas

    printf("\ncarta 1:\n");// exibição da primeira carta
    printf("codico: %s\n", cartacode1);
    printf("estado: %c\n", estado1);
    printf("cidade: %s\n", cidade1);
    printf("população: %d\n", populacao1);
    printf("area: %.2f Km²\n", area1);
    printf("PIB: %.2f B\n", pib1);
    printf("pontos turisticos: %d\n", pontos_turisticos1);
    printf("PIB per capita: %.2f mil\n",pibcap1);
    printf("densidade populacional: %.2f m²\n",densidade1);

    printf("\ncarta 2:\n");// exibição da primeira carta
    printf("codico: %s\n", cartacode2);
    printf("estado: %c\n", estado2);
    printf("cidade: %s\n", cidade2);
    printf("população: %d\n", populacao2);
    printf("area: %.2f Km²\n", area2);
    printf("PIB: %.2f B\n", pib2);
    printf("pontos turisticos: %d\n", pontos_turisticos2);
    printf("PIB per capita: %.2f mil\n",pibcap2);
    printf("densidade populacional: %.2f m²\n",densidade2);

    //comparação
    float superpoder1,superpoder2;
    superpoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pibcap1 - densidade1;
    superpoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pibcap2 - densidade2;
    

    printf("comparação de cartas:\n");
    printf("populaçaõ: %d\n", populacao1 > populacao2);
    printf("área: %d\n",area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("pontos turisticos: %d\n", pontos_turisticos1 > pontos_turisticos2);
    printf("densidade populacional: %d\n", densidade1 > densidade2);
    printf("PIB per Capita: %d\n", pibcap1 > pibcap2);
    printf("super poder: %d\n", superpoder1 > superpoder2);

    return 0;
}
