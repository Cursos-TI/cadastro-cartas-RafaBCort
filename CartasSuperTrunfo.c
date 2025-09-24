#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades




  char estado01, estado02;
  char codigoCarta01[10], codigoCarta02[10];
  char nomeCidade01[20], nomeCidade02[20];
  int populacaoCidade01, populacaoCidade02;
  float areaCidade01, areaCidade02;
  float pibCidade01, pibCidade02;
  int pontosTuristicosCidade01, pontosTuristicosCidade02;




  // Área para entrada de dados
  //coleta de dados da carta 1
  printf("Vamos fazer a primeira carta!\n");
  printf("Por favor, coloque a letra do primeiro estado, use apenas uma letra, de A até H\n");
  scanf(" %c", &estado01);

  printf("Agora coloque o código da carta, o código deve ser a letra do estado e um número de 01 até 04, exemplo: A01\n");
  scanf("%s", codigoCarta01);

  printf("Agora coloque o nome da cidade, por favor, use cidades com nomes simples\n ");
  scanf("%s", nomeCidade01);

  printf("Agora coloque a população da cidade\n");
  scanf("%d", &populacaoCidade01);

  printf("Agora coloque a área da cidade em km²\n");
  scanf("%f", &areaCidade01);

  printf("Agora coloque o PIB da cidade\n");
  scanf("%f", &pibCidade01);

  printf("Por fim, coloque quantos pontos turisticos a cidade possui\n");
  scanf("%d", &pontosTuristicosCidade01);


  //coleta de dados da carta 2
  printf("Vamos fazer a segunda carta!\n");
    printf("Por favor, coloque a letra do segundo estado, use apenas uma letra, de A até H\n");
  scanf(" %c", &estado02);

  printf("Agora coloque o código da carta, o código deve ser a letra do estado e um número de 01 até 04, lembre-se de não fazer o mesmo codigo da primeira carta!\n");
  scanf("%s", codigoCarta02);

  printf("Agora coloque o nome da cidade, por favor, use cidades com nomes simples\n ");
  scanf("%s", nomeCidade02);

  printf("Agora coloque a população da cidade\n");
  scanf("%d", &populacaoCidade02);

  printf("Agora coloque a área da cidade em km²\n");
  scanf("%f", &areaCidade02);

  printf("Agora coloque o PIB da cidade\n");
  scanf("%f", &pibCidade02);

  printf("Por fim, coloque quantos pontos turisticos a cidade possui\n");
  scanf("%d", &pontosTuristicosCidade02);
  

  // Área para exibição dos dados da cidade
  //decidi fazer um printf apenas para todos os dados da carta 1 e outro para a carta 2, para ocupar menos espaço
  printf("\nCarta1\nEstado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação da cidade: %d\nArea da cidade: %.2fkm²\nPib: %.2f\nPontos turisticos: %d\n\n", estado01, codigoCarta01, nomeCidade01, populacaoCidade01, areaCidade01, pibCidade01, pontosTuristicosCidade01);

 //printf da carta 2
  printf("Carta2\nEstado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação da cidade: %d\nArea da cidade: %.2fkm²\nPib: %.2f\nPontos turisticos: %d\n", estado02, codigoCarta02, nomeCidade02, populacaoCidade02, areaCidade02, pibCidade02, pontosTuristicosCidade02);





return 0;
} 
