#include <stdio.h>

int main() {
   
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade_populacional;
    float pib_per_capita;
    float superpoder1;
    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float superpoder2;
    int menu; 
   
    // Entrada de dados para a primeira carta
    printf("Insira os dados da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    
    // Entrada de dados para a segunda carta
    printf("\nInsira os dados da segunda carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
 
    densidade_populacional = (float)populacao1 / area1;
    densidade_populacional2 = (float)populacao2 / area2;
    
    pib_per_capita = pib1 / (float)populacao1;
    pib_per_capita2 = pib2 / (float)populacao2;
    
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + (1 / densidade_populacional) + pib_per_capita;
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + (1 / densidade_populacional2) + pib_per_capita2;


    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("densidade populacional: %.2f\n", densidade_populacional);
    printf("pib per capita: %.2f\n", pib_per_capita);
    printf ("Super poder 1: %.2f\n", superpoder1);
    // Exibição dos dados da segunda carta

   printf("escolha uma opção\n");
   printf("1. comparar população\n");
   printf("2. comparar area\n");
   printf("3. comparar pib\n");
   printf("4. comparar ponto turistico\n");
   printf("5. comparar densidade populacional\n");
   printf("6. comparar pib per capita\n");
   scanf("%d", &menu);

   switch (menu)
   {
   case 1:
   if(populacao1 > populacao2) 
   {
    printf("A população da carta 1 é maior\n");
   }else{
    printf("A população da carta 2 é maior\n");
   }
   break;
   
   case 2:
   if(area1 > area2)
   {
    printf("A carta area 1 é maior\n");
   }else{
    printf("A carta area 2 é maior");
   }
   break;

   case 3:
   if (pib1 > pib2)
   {
    printf("A carta pib 1 é maior");
   }else{
    printf("A carta pib 2 é maior");
   }
   break;
   
   case 4:
   if(pontosTuristicos1 > pontosTuristicos2)
   {
    printf("A carta ponto turistico 1 é maior");
   }else{
    printf("A carta ponto turistico 2 é maior");
   }
  break;

   case 5:
   if(densidade_populacional > densidade_populacional2)
   {
    printf("A carta densidade populacional 1 é maior");
   }else{
    printf("A carta densidade populacional 2 é maior");
   }
   break;

   case 6:
   if(pib_per_capita > pib_per_capita2)
   {
    printf("A carta pib per capita 1 é maior");
   }else{
    printf("A carta pib per capita 2 é maior");
   }
  break;
}
}