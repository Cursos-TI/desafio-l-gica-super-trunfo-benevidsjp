#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

//Variáveis e informações das cidades
    char estadoA = 'A';
    char estadoB = 'B';
    int codigoA = 01;
    int codigoB = 02;
    char cidadeA[50] = "Sao Paulo";
    char cidadeB[50] = "Rio de Janeiro";
    int populacaoA = 12325000;
    int populacaoB = 6748000;
    float areaA = 1521.11;
    float areaB = 1200.25;
    float pibA = 699.28;
    float pibB = 300.50;
    int pt_turisticosA = 50;
    int pt_turisticosB = 30;
    float pib_capitaA = 56736.71; //PIB per capita = PIB / população
    float pib_capitaB = 44531.71;
    float dens_popA = 8102.63; //Densidade populacional = população / área
    float dens_popB = 5622.16;
    int opcao1; //Variáveis para comparação dos atributos
    int opcao2;

//Informações das cartas para o jogador
    printf("**SUPER TRUNFO CIDADES**\n");
    printf("--CIDADE 1--\n");
    printf("CÓDIGO: %c%d CIDADE: %s\n", estadoA, codigoA, cidadeA);
    printf("POPULAÇÃO: %d habitantes\n", populacaoA);
    printf("ÁREA TOTAL: %.2f km²\n", areaA);
    printf("PIB: %.2f bilhões\n", pibA);
    printf("PONTOS TURÍSTICOS: %d\n", pt_turisticosA);
    printf("PIB PER CAPITA: %.2f bi/hab\n", pib_capitaA);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", dens_popA);
    printf("--CIDADE 2--\n");
    printf("CÓDIGO: %c%d CIDADE: %s\n", estadoB, codigoB, cidadeB);
    printf("POPULAÇÃO: %d habitantes\n", populacaoB);
    printf("ÁREA TOTAL: %.2f km²\n", areaB);
    printf("PIB: %.2f bilhões\n", pibB);
    printf("PONTOS TURÍSTICOS: %d\n", pt_turisticosB);
    printf("PIB PER CAPITA: %.2f bi/hab\n", pib_capitaB);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", dens_popB);

 //Área para escolha de um atributo
    printf("--ESCOLHA DOIS ATRIBUTOS PARA COMPARAÇÃO (Escolha dois diferentes!)--\n");
    printf("1. População \n");
    printf("2. Área Total\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. PIB per capita\n");
    printf("6. Densidade Populacional\n");
    printf("ATENÇÃO: Para Dens. Populacional, um MENOR valor é melhor\n");
    printf("Digite sua primeira escolha: \n");
    scanf("%d", &opcao1);
    printf("Digite sua segunda escolha: \n");
    scanf("%d", &opcao2);

    if(opcao1 == opcao2) {
        printf("Você escolheu o mesmo atributo. Escolha dois diferentes\n");
    } else { 
        printf("Teste");
    }

}
