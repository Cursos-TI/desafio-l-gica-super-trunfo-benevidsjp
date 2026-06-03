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
    int opcao; //variável para ativar o switch


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
    printf("--ESCOLHA UM ATRIBUTO PARA COMPARAÇÃO--\n");
    printf("1. População \n");
    printf("2. Área Total\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. PIB per capita\n");
    printf("6. Densidade Populacional\n");
    printf("ATENÇÃO: Para Dens. Populacional, um MENOR valor é melhor\n");
    printf("Digite sua escolha: \n");
    scanf("%d", &opcao);

    //Switch para verificação dos atributos
    switch(opcao) {
    case 1:
        printf("O atributo escolhido foi População\n");
        printf("População da Carta 1 (São Paulo): 12325000 habitantes\n");
        printf("População da Carta 2 (Rio de Janeiro): 6748000 habitantes\n");
        if(populacaoA > populacaoB) {
            printf("Carta 1 (São Paulo) venceu!\n");
        } else {
            printf("Carta 2 (Rio de Janeiro) venceu!\n");
     }
        break;
    case 2:
       printf("O atributo escolhido foi Área Total\n");
       printf("Área total da Carta 1 (São Paulo): 1521.11 km²\n");
       printf("Área total da Carta 2 (Rio de Janeiro): 1200.25 km²\n");
       if(areaA > areaB) {
            printf("Carta 1 (São Paulo) venceu!\n");
        } else {
            printf("Carta 2 (Rio de Janeiro) venceu!\n");
    }
    break;
    case 3:
       printf("O atributo escolhido foi PIB\n");
       printf("PIB da Carta 1 (São Paulo): 699.28 bilhões\n");
       printf("PIB da Carta 2 (Rio de Janeiro): 300.50 bilhões\n");
       if(pibA > pibB) {
            printf("Carta 1 (São Paulo) venceu!\n");
        } else {
            printf("Carta 2 (Rio de Janeiro) venceu!\n");
    }
        break;
    case 4:
       printf("O atributo escolhido foi Pontos Turísticos\n");
       printf("Qtde. de Pontos Turísticos da Carta 1 (São Paulo): 50\n");
       printf("Qtde. de Pontos Turísticos da Carta 2 (Rio de Janeiro): 30\n");
       if(pt_turisticosA > pt_turisticosB) {
            printf("Carta 1 (São Paulo) venceu!\n");
        } else {
            printf("Carta 2 (Rio de Janeiro) venceu!\n");
     }
     break;
    case 5:
       printf("O atributo escolhido foi PIB per Capita\n");
       printf("PIB per Capita da Carta 1 (São Paulo): 56736.71 bi/hab\n");
       printf("PIB per Capita da Carta 2 (Rio de Janeiro): 44531.71 bi/hab\n");
       if(pib_capitaA > pib_capitaB) {
            printf("Carta 1 (São Paulo) venceu!\n");
        } else {
            printf("Carta 2 (Rio de Janeiro) venceu!\n");
    }
        break;
    case 6:
       printf("O atributo escolhido foi Densidade Populacional\n");
       printf("Densidade da Carta 1 (São Paulo): 8102.63 hab/km²\n");
       printf("Densidade da Carta 2 (Rio de Janeiro): 5622.16 hab/km²\n");
       if(dens_popA < dens_popB) {
            printf("Carta 1 (São Paulo) venceu!\n");
        } else {
            printf("Carta 2 (Rio de Janeiro) venceu!\n");
    }
        break;
    default:
        printf("Opção inválida\n");
    }

}