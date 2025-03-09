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

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("densidade populacional: %f\n", densidade_populacional2);
    printf("pib per capita: %.2f\n", pib_per_capita2);
    printf("Super poder 2: %.2f\n", superpoder2);
    
    printf("populacao: carta1 venceu (%d)\n", populacao1 > populacao2);
    printf("area: carta1 venceu (%d)\n", area1 > area2);
    printf("pib: carta1 venceu (%d)\n", pib1 > pib2);
    printf("pontos turisticos: carta1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("densidade populacional: carta2 venceu (%d)\n", densidade_populacional < densidade_populacional2);
    printf("pib per cipita: carta1 venceu (%d)\n", pib_per_capita > pib_per_capita2);
    printf("super poder1: a carta venceu (%d)\n", superpoder1 > superpoder2);
    }