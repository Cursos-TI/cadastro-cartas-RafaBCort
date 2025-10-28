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
  float superPoder01 = 0.f, superPoder02 = 0.f;
  int escolha;

  // Área para entrada de dados
  // coleta de dados da carta 1.
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

  /*calculo do super poder
  superPoder01 = calcularSuperPoder(populacaoCidade01, areaCidade01, pibCidade01, densidadePopulacional01, pibPerCapita01, pontosTuristicosCidade01);
  superPoder02 = calcularSuperPoder(populacaoCidade02, areaCidade02, pibCidade02, densidadePopulacional02, pibPerCapita02, pontosTuristicosCidade02);
  na segunda atividade o super poder é ignorado, então vou apenas comenta-lo
  */

  // Área para exibição dos dados da cidade
  // decidi fazer um printf apenas para todos os dados da carta 1 e outro para a carta 2, para ocupar menos espaço
  printf("\nCarta1\nEstado: %c\nCódigo: %s\nNome da cidade: %s \nPopulação da cidade: %lu \nArea da cidade: %.2fkm² \nPib: %.2f bilhão\nPontos turisticos: %d \nDensidade populacional: %.2f habitantes por km² \nPib per Capta: %.2f reais \nSuper Poder : %.2f ", estado01, codigoCarta01, nomeCidade01, populacaoCidade01, areaCidade01, pibCidade01, pontosTuristicosCidade01, densidadePopulacional01, pibPerCapita01, superPoder01);

  // printf da carta 2
  printf("\n\nCarta2\nEstado: %c\nCódigo: %s\nNome da cidade: %s \nPopulação da cidade: %lu \nArea da cidade: %.2fkm² \nPib: %.2f bilhão\nPontos turisticos: %d \nDensidade populacional: %.2f habitantes por km² \nPib per Capta: %.2f reais \nSuper Poder : %.2f ", estado02, codigoCarta02, nomeCidade02, populacaoCidade02, areaCidade02, pibCidade02, pontosTuristicosCidade02, densidadePopulacional02, pibPerCapita02, superPoder02);

  // comparação das cartas

  printf("\n\n Hora de comparar as cartas!\n");
  printf("\n digite 1 para comparar População");
  printf("\n digite 2 para comparar Área");
  printf("\n digite 3 para comparar PIB");
  printf("\n digite 4 para comparar Pontos turísticos");
  printf("\n digite 5 para comparar Densidade populacional");
  printf("\n digite 6 para comparar PIB per capita");
  scanf("%d", &escolha);

  switch (escolha)
  {
  case 1:
    printf("Você escolheu População.\n");
    printf("cidade01 %s, população: %lu\n", nomeCidade01, populacaoCidade01);
    printf("cidade02 %s, população: %lu\n", nomeCidade02, populacaoCidade02);
    if (populacaoCidade01 > populacaoCidade02)
    {
      printf("A carta1 venceu! A cidade com maior população é %s\n", nomeCidade01);
    }
    else if (populacaoCidade02 > populacaoCidade01)
    {
      printf("A carta2 venceu! A cidade com maior população é %s\n", nomeCidade02);
    }
    else
    {
      printf("Empate! As duas cidades possuem a mesma população.\n");
    }

    break;
  case 2:
    printf("Você escolheu Área.\n");
    printf("cidade01 %s, área: %.2f km²\n", nomeCidade01, areaCidade01);
    printf("cidade02 %s, área: %.2f km²\n", nomeCidade02, areaCidade02);
    if (areaCidade01 > areaCidade02)
    {
      printf("A carta1 venceu! A cidade com maior área é %s\n", nomeCidade01);
    }
    else if (areaCidade02 > areaCidade01)
    {
      printf("A carta2 venceu! A cidade com maior área é %s\n", nomeCidade02);
    }
    else
    {
      printf("Empate! As duas cidades possuem a mesma área.\n");
    }
    break;
  case 3:
    printf("Você escolheu PIB.\n");
    printf("cidade01 %s, PIB: %.2f bilhões\n", nomeCidade01, pibCidade01);
    printf("cidade02 %s, PIB: %.2f bilhões\n", nomeCidade02, pibCidade02);
    if (pibCidade01 > pibCidade02)
    {
      printf("A carta1 venceu! A cidade com maior PIB é %s\n", nomeCidade01);
    }
    else if (pibCidade02 > pibCidade01)
    {
      printf("A carta2 venceu! A cidade com maior PIB é %s\n", nomeCidade02);
    }
    else
    {
      printf("Empate! As duas cidades possuem o mesmo PIB.\n");
    }

    break;
  case 4:
    printf("Você escolheu Pontos turísticos.\n");
    printf("cidade01 %s, pontos turísticos: %d\n", nomeCidade01, pontosTuristicosCidade01);
    printf("cidade02 %s, pontos turísticos: %d\n", nomeCidade02, pontosTuristicosCidade02);
    if (pontosTuristicosCidade01 > pontosTuristicosCidade02)
    {
      printf("A carta1 venceu! A cidade com mais pontos turísticos é %s\n", nomeCidade01);
    }
    else if (pontosTuristicosCidade02 > pontosTuristicosCidade01)
    {
      printf("A carta2 venceu! A cidade com mais pontos turísticos é %s\n", nomeCidade02);
    }
    else
    {
      printf("Empate! As duas cidades possuem a mesma quantidade de pontos turísticos.\n");
    }

    break;
  case 5:
    printf("Você escolheu Densidade populacional.\n");
    printf("cidade01 %s, densidade populacional: %.2f habitantes por km²\n", nomeCidade01, densidadePopulacional01);
    printf("cidade02 %s, densidade populacional: %.2f habitantes por km²\n", nomeCidade02, densidadePopulacional02);
    if (densidadePopulacional01 < densidadePopulacional02)
    {
      printf("A carta1 venceu! A cidade com menor densidade populacional é %s\n", nomeCidade01);
    }
    else if (densidadePopulacional02 < densidadePopulacional01)
    {
      printf("A carta2 venceu! A cidade com menor densidade populacional é %s\n", nomeCidade02);
    }
    else
    {
      printf("Empate! As duas cidades possuem a mesma densidade populacional.\n");
    }
    break;
  case 6:
    printf("Você escolheu PIB per capita.\n");
    printf("cidade01 %s, PIB per capita: %.2f reais\n", nomeCidade01, pibPerCapita01);
    printf("cidade02 %s, PIB per capita: %.2f reais\n", nomeCidade02, pibPerCapita02);
    if (pibPerCapita01 > pibPerCapita02)
    {
      printf("A carta1 venceu! A cidade com maior PIB per capita é %s\n", nomeCidade01);
    }
    else if (pibPerCapita02 > pibPerCapita01)
    {
      printf("A carta2 venceu! A cidade com maior PIB per capita é %s\n", nomeCidade02);
    }
    else
    {
      printf("Empate! As duas cidades possuem o mesmo PIB per capita.\n");
    }
    break;
  default:
    printf("por favor, use os números de 1 a 6\n");
    break;

    return 0;
  }