#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int carta = 1;
  char estado;
  char codigo[3];
  char nomeCidade[50];
  int populacao;
  double area;
  double pib;
  int numeroPontosTuristicos;

  // Área para entrada de dados
  printf("\nCadastrando a Carta %d\n", carta);
  printf("Qual o estado da carta %d?\n", carta);
  scanf("%c\n", &estado);

  printf("Qual o codigo da carta %d?\n", carta);
  scanf("%3s", &codigo);

  printf("Qual o nome da cidade da carta %d?\n", carta);
  scanf("%49[^\n]", &nomeCidade);

  printf("Qual a população da cidade?\n");
  scanf("%d", &populacao);

  printf("Qual a área da cidade?\n");
  scanf("%f", &area);

  printf("Qual é o PIB da cidade?\n");
  scanf("%f", &pib);

  printf("Qual o número de pontos turisticos da cidade?\n");
  scanf("%d", &numeroPontosTuristicos);

  // Área para exibição dos dados da cidade
  printf("\nCarta %d cadastrada com sucesso:\n", carta);
  printf("Estado: %c\n", estado);
  printf("Codigo: %s\n", codigo);
  printf("Cidade: %s\n", nomeCidade);
  printf("Populacao: %d\n", populacao);
  printf("Area: %.2lfkm2\n", area);
  printf("PIB: %.2lf\n", pib);
  printf("Pontos turisticos: %d\n\n", numeroPontosTuristicos);

return 0;
} 
