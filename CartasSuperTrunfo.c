#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

// codigo para fazer a densidade

float calcularDensidade(unsigned long int populacao, float area)
{

  return populacao / area;
}
// codigo para fazer o pib per capita, é necessario transformar o pib em reais, por isso multiplica por 1 bilhão
float calcularPibPerCapita(float pib, unsigned long int populacao)
{
  return (pib * 1000000000) / populacao;
}
// codigo para fazer o super poder, a densidade deve ser invertida
float calcularSuperPoder(unsigned long int populacao, float area, float pib, float densidade, float pibPerCapita, int pontosTuristicos)
{

  return populacao + area + pib + 1 / densidade + pibPerCapita + pontosTuristicos;
}

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado01, estado02;
  char codigoCarta01[10], codigoCarta02[10];
  char nomeCidade01[20], nomeCidade02[20];
  unsigned long int populacaoCidade01, populacaoCidade02;
  float areaCidade01, areaCidade02;
  float pibCidade01, pibCidade02;
  int pontosTuristicosCidade01, pontosTuristicosCidade02;
  float densidadePopulacional01, densidadePopulacional02;
  float pibPerCapita01, pibPerCapita02;
  float superPoder01, superPoder02;

  // Área para entrada de dados
  // coleta de dados da carta 1
  printf("Vamos fazer a primeira carta!\n");
  printf("Por favor, coloque a letra do primeiro estado, use apenas uma letra, de A até H\n");
  scanf(" %c", &estado01);

  printf("Agora coloque o código da carta, o código deve ser a letra do estado e um número de 01 até 04, exemplo: A01\n");
  scanf("%s", codigoCarta01);

  printf("Agora coloque o nome da cidade, por favor, use cidades com nomes simples\n ");
  scanf("%s", nomeCidade01);

  printf("Agora coloque a população da cidade\n");
  scanf("%lu", &populacaoCidade01);

  printf("Agora coloque a área da cidade em km²\n");
  scanf("%f", &areaCidade01);

  printf("Agora coloque o PIB da cidade em bilhões\n");
  scanf("%f", &pibCidade01);

  printf("Por fim, coloque quantos pontos turisticos a cidade possui\n");
  scanf("%d", &pontosTuristicosCidade01);

  // coleta de dados da carta 2
  printf("Vamos fazer a segunda carta!\n");
  printf("Por favor, coloque a letra do segundo estado, use apenas uma letra, de A até H\n");
  scanf(" %c", &estado02);

  printf("Agora coloque o código da carta, o código deve ser a letra do estado e um número de 01 até 04, lembre-se de não fazer o mesmo codigo da primeira carta!\n");
  scanf("%s", codigoCarta02);

  printf("Agora coloque o nome da cidade, por favor, use cidades com nomes simples\n ");
  scanf("%s", nomeCidade02);

  printf("Agora coloque a população da cidade\n");
  scanf("%lu", &populacaoCidade02);

  printf("Agora coloque a área da cidade em km²\n");
  scanf("%f", &areaCidade02);

  printf("Agora coloque o PIB da cidade em bilhões\n");
  scanf("%f", &pibCidade02);

  printf("Por fim, coloque quantos pontos turisticos a cidade possui\n");
  scanf("%d", &pontosTuristicosCidade02);

  // calculo da densidade populacional
  densidadePopulacional01 = calcularDensidade(populacaoCidade01, areaCidade01);
  densidadePopulacional02 = calcularDensidade(populacaoCidade02, areaCidade02);

  // calculo do pib per capita
  pibPerCapita01 = calcularPibPerCapita(pibCidade01, populacaoCidade01);
  pibPerCapita02 = calcularPibPerCapita(pibCidade02, populacaoCidade02);

  // calculo do super poder
  superPoder01 = calcularSuperPoder(populacaoCidade01, areaCidade01, pibCidade01, densidadePopulacional01, pibPerCapita01, pontosTuristicosCidade01);
  superPoder02 = calcularSuperPoder(populacaoCidade02, areaCidade02, pibCidade02, densidadePopulacional02, pibPerCapita02, pontosTuristicosCidade02);

  // Área para exibição dos dados da cidade
  // decidi fazer um printf apenas para todos os dados da carta 1 e outro para a carta 2, para ocupar menos espaço
  printf("\nCarta1\nEstado: %c\nCódigo: %s\nNome da cidade: %s \nPopulação da cidade: %lu \nArea da cidade: %.2fkm² \nPib: %.2f bilhão\nPontos turisticos: %d \nDensidade populacional: %.2f habitantes por km² \nPib per Capta: %.2f reais \nSuper Poder : %.2f ", estado01, codigoCarta01, nomeCidade01, populacaoCidade01, areaCidade01, pibCidade01, pontosTuristicosCidade01, densidadePopulacional01, pibPerCapita01, superPoder01);

  // printf da carta 2
  printf("\n\nCarta2\nEstado: %c\nCódigo: %s\nNome da cidade: %s \nPopulação da cidade: %lu \nArea da cidade: %.2fkm² \nPib: %.2f bilhão\nPontos turisticos: %d \nDensidade populacional: %.2f habitantes por km² \nPib per Capta: %.2f reais \nSuper Poder : %.2f ", estado02, codigoCarta02, nomeCidade02, populacaoCidade02, areaCidade02, pibCidade02, pontosTuristicosCidade02, densidadePopulacional02, pibPerCapita02, superPoder02);

  // comparação das cartas

  printf("\n\n Hora de comparar as cartas!, se o resultado for 1, a carta 1 venceu, se for 0, a carta 2 venceu \n");

  printf("População: resultado = %d", populacaoCidade01 > populacaoCidade02);

  printf("\nÁrea: resultado = %d", areaCidade01 > areaCidade02);

  printf("\nPib: resultado = %d", pibCidade01 > pibCidade02);

  printf("\nPontos turisticos: resultado = %d", pontosTuristicosCidade01 > pontosTuristicosCidade02);
  // a densidade vence quando for menor
  printf("\nDensidade populacional: resultado = %d", densidadePopulacional01 < densidadePopulacional02);

  printf("\nPib per Capita: resultado = %d", pibPerCapita01 > pibPerCapita02);

  printf("\nSuper Poder: resultado = %d", superPoder01 > superPoder02);

  return 0;
}