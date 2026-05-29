#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

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

    printf("**SUPER TRUNFO CIDADES**\n");
    printf("--CIDADE 1--\n");
    printf("CÓDIGO: %c%d CIDADE: %s\n", estadoA, codigoA, cidadeA);
    printf("POPULAÇÃO: %d habitantes\n", populacaoA);
    printf("ÁREA TOTAL: %.2f km²\n", areaA);
    printf("PIB: %.2f bilhões\n", pibA);
    printf("PONTOS TURÍSTICOS: %d\n", pt_turisticosA);
    printf("--CIDADE 2--\n");
    printf("CÓDIGO: %c%d CIDADE: %s\n", estadoB, codigoB, cidadeB);
    printf("POPULAÇÃO: %d habitantes\n", populacaoB);
    printf("ÁREA TOTAL: %.2f km²\n", areaB);
    printf("PIB: %.2f bilhões\n", pibB);
    printf("PONTOS TURÍSTICOS: %d", pt_turisticosB);



}