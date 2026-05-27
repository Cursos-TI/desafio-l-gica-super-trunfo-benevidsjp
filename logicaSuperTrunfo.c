#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
// Definição das variáveis para armazenar as propriedades das cidades
// Você pode utilizar o código do primeiro desafio
    char estadoA;
    char estadoB;
    char codigoA[10];
    char codigoB[10];
    char cidadeA[50];
    char cidadeB[50];
    int populacaoA;
    int populacaoB;
    float areaA;
    float areaB;
    float pibA;
    float pibB;
    int pt_turisticosA;
    int pt_turisticosB;
    char *cidadeVencedora;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    printf("----INFORMAÇÕES DA CARTA 1----\n");
    printf("ESTADO - Digite uma letra (de A - H) para representar o Estado 1: \n");
    scanf("%c", &estadoA);

    printf("CÓDIGO - Digite um número de 01 a 04 para o código da carta 1: \n");
    scanf("%s", &codigoA);

    printf("CIDADE - Digite o nome da cidade da carta 1: \n");
    scanf("%s", cidadeA);

    printf("POPULAÇÃO - Digite a população da cidade da carta 1 (apenas números, sem vírgulas ou pontos. Ex: 123456): \n");
    scanf("%d", &populacaoA);

    printf("ÁREA - Digite a área total da cidade 1, com aproximação de duas casas decimais (Ex: 1234.56): \n");
    scanf("%f", &areaA);

    printf("PIB - Digite o PIB da cidade 1 em bilhões de reais, com aproximação de duas casas decimais: \n");
    scanf("%f", &pibA);

    printf("PTS TURÍSTICOS - Digite a quantidade de pontos turísticos da cidade 1: \n");
    scanf("%d", &pt_turisticosA);

  
    printf("----INFORMAÇÕES DA CARTA 2----\n");
  
    printf("ESTADO - Digite uma letra (de A - H) para representar o Estado 2: \n");
    scanf(" %c", &estadoB);

     printf("CÓDIGO - Digite um número de 01 a 04 para o código da carta 2: \n");
    scanf("%s", &codigoB);

    printf("CIDADE - Digite o nome da cidade da carta 2: \n");
    scanf("%s", cidadeB);

    printf("POPULAÇÃO - Digite a população da cidade da carta 2 (apenas números, sem vírgulas ou pontos. Ex: 123456): \n");
    scanf("%d", &populacaoB);

    printf("ÁREA - Digite a área total da cidade 2, com aproximação de duas casas decimais (Ex: 1234,56): \n");
    scanf("%f", &areaB);

    printf("PIB - Digite o PIB da cidade 2 em bilhões de reais, com aproximação de duas casas decimais: \n");
    scanf("%f", &pibB);

    printf("PTS TURÍSTICOS - Digite a quantidade de pontos turísticos da cidade 1: \n");
    scanf("%d", &pt_turisticosB);


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    printf("** COMPARAÇÃO DE CARTAS **\n");
    printf("Atributo: População\n");
    printf("Carta 1 - São Paulo (SP): %d\n", populacaoA);
    printf("Carta 2 - Rio de Janeiro (RJ): %d\n", populacaoB);
    if(populacaoA > populacaoB){
        printf("Cidade 1 tem a maior população\n");
        cidadeVencedora = "São Paulo";
    } else {
        printf("Cidade 2 tem a maior população\n");
        cidadeVencedora = "Rio de Janeiro";
    }
    printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
