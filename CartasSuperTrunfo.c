#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


int main() {
  char Estado_Carta_1, Codigo_Carta_1[20], Cidade_Carta_1[20];
  char Estado_Carta_2, Codigo_Carta_2[20], Cidade_Carta_2[20];
  int Pontos_Turisticos_Carta_1, Populacao_Carta_1;
  int Pontos_Turisticos_Carta_2, Populacao_Carta_2;
  float Area_Carta_1, PIB_Carta_1;
  float Area_Carta_2, PIB_Carta_2;

  // Área para entrada de dados Carta 1
  printf("-> {Carta 1} Digite uma letra de 'A' a 'H' representando o Estado: \n ");
  scanf(" %c", &Estado_Carta_1);

  printf("-> {Carta 1} Digite o codigo da carta  (ex: A01, B03): \n ");
  scanf("%s", Codigo_Carta_1);

  printf("-> {Carta 1} Digite o nome da Cidade: \n ");
  scanf(" %[^\n]", Cidade_Carta_1);

  printf("-> {Carta 1} Digite os numeros de Pontos tutristicos: \n ");
  scanf("%d", &Pontos_Turisticos_Carta_1);

  printf("-> {Carta 1} Digite o numero populacional da cidade: \n ");
  scanf("%d", &Populacao_Carta_1);

  printf("-> {Carta 1} Numero da Area km2: \n ");
  scanf("%f", &Area_Carta_1);

  printf("-> {Carta 1} Numero do PIB da Cidade: \n ");
  scanf("%f", &PIB_Carta_1);

  // Área para entrada de dados Carta 2
  printf("-> {Carta 2} Digite uma letra de 'A' a 'H' representando o Estado: \n ");
  scanf(" %c", &Estado_Carta_2);

  printf("-> {Carta 2} Digite o codigo da carta  (ex: A01, B03): \n ");
  scanf("%s", Codigo_Carta_2);

  printf("-> {Carta 2} Digite o nome da Cidade: \n ");
  scanf(" %[^\n]", Cidade_Carta_2);

  printf("-> {Carta 2} Digite os numeros de Pontos tutristicos: \n ");
  scanf("%d", &Pontos_Turisticos_Carta_2);

  printf("-> {Carta 2} Digite o numero populacional da cidade: \n ");
  scanf("%d", &Populacao_Carta_2);

  printf("-> {Carta 2} Numero da Area km2: \n ");
  scanf("%f", &Area_Carta_2);

  printf("-> {Carta 2} Numero do PIB da Cidade: \n ");
  scanf("%f", &PIB_Carta_2);

  // Área para saida de dados Carta 1
  printf("\n---------{Carta 1}---------\n");
  printf("Estado: %c\n", Estado_Carta_1);
  printf("Codigo: %s\n", Codigo_Carta_1);
  printf("Cidade: %s\n", Cidade_Carta_1);
  printf("População: %d\n", Populacao_Carta_1);
  printf("Area: %.2f km²\n", Area_Carta_1);
  printf("PIB: %.2f bilhões\n", PIB_Carta_1);
  printf("Pontos Turisticos: %d\n", Pontos_Turisticos_Carta_1);

  // Área para saida de dados Carta 2
  printf("\n---------{Carta 2}---------\n");
  printf("Estado: %c\n", Estado_Carta_2);
  printf("Codigo: %s\n", Codigo_Carta_2);
  printf("Cidade: %s\n", Cidade_Carta_2);
  printf("População: %d\n", Populacao_Carta_2);
  printf("Area: %.2f km²\n", Area_Carta_2);
  printf("PIB: %.2f bilhões\n", PIB_Carta_2);
  printf("Pontos Turisticos: %d\n", Pontos_Turisticos_Carta_2);

  return 0;
}

