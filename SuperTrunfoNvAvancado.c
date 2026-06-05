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
    int atributo1;
    int atributo2;
    int atributo3;
    int atributo4;
    int resultado1;
    int resultado2;

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
        return 1;
    } else {
        switch (opcao1) 
    {
    case 1:
        printf("O atributo 1 escolhido foi População\n");
        printf("População da Carta 1 (São Paulo): 12325000 habitantes\n");
        printf("População da Carta 2 (Rio de Janeiro): 6748000 habitantes\n");
        atributo1 = populacaoA;
        atributo2 = populacaoB;
        break;
    case 2:
        printf("O atributo 1 escolhido foi Área Total\n");
        printf("Área total da Carta 1 (São Paulo): 1521.11 km²\n");
        printf("Área total da Carta 2 (Rio de Janeiro): 1200.25 km²\n");
        atributo1 = areaA;
        atributo2 = areaB;
        break;
    case 3:
        printf("O atributo 1 escolhido foi PIB\n");
        printf("PIB da Carta 1 (São Paulo): 699.28 bilhões\n");
        printf("PIB da Carta 2 (Rio de Janeiro): 300.50 bilhões\n");
        atributo1 = pibA;
        atributo2 = pibB;
        break;
    case 4:
        printf("O atributo 1 escolhido foi Pontos Turísticos\n");
        printf("Qtde. de Pontos Turísticos da Carta 1 (São Paulo): 50\n");
        printf("Qtde. de Pontos Turísticos da Carta 2 (Rio de Janeiro): 30\n");
        atributo1 = pt_turisticosA;
        atributo2 = pt_turisticosB;
        break;
    case 5:
        printf("O atributo 1 escolhido foi PIB per Capita\n");
        printf("PIB per Capita da Carta 1 (São Paulo): 56736.71 bi/hab\n");
        printf("PIB per Capita da Carta 2 (Rio de Janeiro): 44531.71 bi/hab\n");
        atributo1 = pib_capitaA;
        atributo2 = pib_capitaB;
        break;
    case 6:
        printf("O atributo 1 escolhido foi Densidade Populacional\n");
        printf("Densidade da Carta 1 (São Paulo): 8102.63 hab/km²\n");
        printf("Densidade da Carta 2 (Rio de Janeiro): 5622.16 hab/km²\n");
        atributo1 = dens_popA;
        atributo2 = dens_popB;
        break;
    default:
        printf("Opção inválida\n");
        break;
    } 
    switch(opcao2) {
    case 1:
        printf("O atributo 2 escolhido foi População\n");
        printf("População da Carta 1 (São Paulo): 12325000 habitantes\n");
        printf("População da Carta 2 (Rio de Janeiro): 6748000 habitantes\n");
        atributo3 = populacaoA;
        atributo4 = populacaoB;
        break;
    case 2:
        printf("O atributo 2 escolhido foi Área Total\n");
        printf("Área total da Carta 1 (São Paulo): 1521.11 km²\n");
        printf("Área total da Carta 2 (Rio de Janeiro): 1200.25 km²\n");
        atributo3 = areaA;
        atributo4 = areaB;
        break;
    case 3:
        printf("O atributo 2 escolhido foi PIB\n");
        printf("PIB da Carta 1 (São Paulo): 699.28 bilhões\n");
        printf("PIB da Carta 2 (Rio de Janeiro): 300.50 bilhões\n");
        atributo3 = pibA;
        atributo4 = pibB;
        break;
    case 4:
        printf("O atributo 2 escolhido foi Pontos Turísticos\n");
        printf("Qtde. de Pontos Turísticos da Carta 1 (São Paulo): 50\n");
        printf("Qtde. de Pontos Turísticos da Carta 2 (Rio de Janeiro): 30\n");
        atributo3 = pt_turisticosA;
        atributo4 = pt_turisticosB;
        break;
    case 5:
        printf("O atributo 2 escolhido foi PIB per Capita\n");
        printf("PIB per Capita da Carta 1 (São Paulo): 56736.71 bi/hab\n");
        printf("PIB per Capita da Carta 2 (Rio de Janeiro): 44531.71 bi/hab\n");
        atributo3 = pib_capitaA;
        atributo4 = pib_capitaB;
        break;
    case 6:
        printf("O atributo 2 escolhido foi Densidade Populacional\n");
        printf("Densidade da Carta 1 (São Paulo): 8102.63 hab/km²\n");
        printf("Densidade da Carta 2 (Rio de Janeiro): 5622.16 hab/km²\n");
        atributo3 = dens_popA;
        atributo4 = dens_popB;
        break;
    default:
        printf("Opção inválida\n");
        break;
    }
    }

    resultado1 = atributo1 + atributo3;
    resultado2 = atributo2 + atributo4;

    printf("A soma dos atributos escolhidos foi %d\n", resultado1);

    if(resultado1 > resultado2) {
        printf("A carta 1 (São Paulo) venceu!\n");
        printf("-- Resultados --\n");
        printf("Carta 1: %d\n", resultado1);
        printf("Carta 2: %d\n", resultado2);
    } else if(resultado1 == resultado2) {
        printf("Empate!\n");
    } else {
        printf("A carta 2 (Rio de Janeiro) venceu!\n");
        printf("-- Resultados --\n");
        printf("Carta 1: %d\n", resultado1);
        printf("Carta 2: %d\n", resultado2);
    }
        
}
