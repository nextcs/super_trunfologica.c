#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    int pontos1, pontos2;
    float area1, area2, pib1, pib2;

    float densidade1, densidade2;
    float pibper1, pibper2;
    float superpoder1, superpoder2;

    int atributo1, atributo2;
    float valor1C1 = 0, valor1C2 = 0;
    float valor2C1 = 0, valor2C2 = 0;
    float soma1, soma2;


    // --- Entrada de dados da Carta 1 ---
    printf("Digite as informações da primeira carta:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado1);  
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf("%s", cidade1); 
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em milhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1); 

    printf("\n");

    // --- Entrada de dados da Carta 2 ---
    printf("Digite as informações da segunda carta:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);  
    printf("Código (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf("%s", cidade2);  
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em milhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2); 


    // --- calculos ---
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibper1 = pib1 * 1000000 / populacao1; // pib esta em milhoes
    pibper2 = pib2 * 1000000 / populacao2;

    superpoder1 = (float)populacao1 + area1 + pib1 + pontos1 + pibper1 + (1.0f / densidade1);
    superpoder2 = (float)populacao2 + area2 + pib2 + pontos2 + pibper2 + (1.0f / densidade2);


    // Exibição dos dados das cartas 
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("densidade populacional: %.2f\n", densidade1);
    printf("pib per capita: R$ %.2f\n", pibper1);
    printf("super poder: %.2f\n", superpoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("densidade populacional: %.2f\n", densidade2);
    printf("pib per capita: R$ %.2f\n", pibper2);
    printf("super poder: %.2f\n", superpoder2);


    // comparacoes
    printf("\nresultados das comparacoes (1 = carta1 vence, 0 carta2 vence): \n");

    printf("populacao: %d\n", populacao1 > populacao2);
    printf("area: %d\n", area1 > area2);
    printf("pib: %d\n", pib1 > pib2);
    printf("pontos turisticos: %d\n", pontos1 > pontos2);
    printf("densidade populacional (menor vence): %d\n", densidade1 < densidade2);
    printf("super poder: %d\n",superpoder1 > superpoder2);

    printf("\n");

    // Menu Interativo
    int opcao;
    printf("Escolha um atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade populacional (menor vence)\n");
    printf("6 - Superpoder\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    printf("\nComparação entre %s e %s:\n", cidade1, cidade2);

    switch(opcao) {
    case 1:
        printf("População:\n");
        printf("%s: %lu habitantes\n", cidade1, populacao1);
        printf("%s: %lu habitantes\n", cidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

    case 2:
        printf("Área:\n");
        printf("%s: %.2f km²\n", cidade1, area1);
        printf("%s: %.2f km²\n", cidade2, area2);
            if (area1 > area2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (area2 > area1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

    case 3:
        printf("PIB:\n");
        printf("%s: R$ %.2f milhões\n", cidade1, pib1);
        printf("%s: R$ %.2f milhões\n", cidade2, pib2);
            if (pib1 > pib2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (pib2 > pib1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

    case 4:
        printf("Pontos turísticos:\n");
        printf("%s: %d\n", cidade1, pontos1);
        printf("%s: %d\n", cidade2, pontos2);
            if (pontos1 > pontos2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (pontos2 > pontos1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

    case 5:
        printf("Densidade populacional:\n");
        printf("%s: %.2f hab/km²\n", cidade1, densidade1);
        printf("%s: %.2f hab/km²\n", cidade2, densidade2);
            if (densidade1 < densidade2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (densidade2 < densidade1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

    case 6:
        printf("Superpoder:\n");
        printf("%s: %.2f\n", cidade1, superpoder1);
        printf("%s: %.2f\n", cidade2, superpoder2);
            if (superpoder1 > superpoder2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (superpoder2 > superpoder1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
    }

    printf("\n");

    //comparacao avancada com dois atributos
    printf("\n===comparacao avançada com dois atributos===\n");

    //primero atributo
    printf("escolha o primeiro atributo: \n");
    printf("1. populacao\n");
    printf("2. pontosT\n");
    printf("3. area\n");
    printf("4. densidade\n");
    printf("5. pib\n");
    printf("6. super poder\n");
    scanf("%d", &atributo1);

    //segundo atributo
    printf("escolha o segundo atributo (diferente do primeiro): \n");
    switch (atributo1)
    {
    case 1:
        printf("2- pontosT\n"); 
        printf("3- area\n"),         
        printf("4- densidade\n");        
        printf("5- pib\n");        
        printf("6- superpoder\n");
        break;
    case 2:
        printf("1- populacao\n"); 
        printf("3- area\n"),         
        printf("4- densidade\n");        
        printf("5- pib\n");        
        printf("6- superpoder\n");
    case 3:
        printf("1- populacao\n"); 
        printf("2- pontosT\n"),         
        printf("4- densidade\n");        
        printf("5- pib\n");        
        printf("6- superpoder\n");
        break;
    case 4:
        printf("1- populacao\n"); 
        printf("2- pontosT\n"),         
        printf("3- area\n");        
        printf("5- pib\n");        
        printf("6- superpoder\n");
        break;
    case 5:
        printf("1- populacao\n"); 
        printf("2- pontosT\n"),         
        printf("3- area\n");        
        printf("4- densidade\n");        
        printf("6- superpoder\n");
        break;
    case 6:
        printf("1- populacao\n"); 
        printf("2- pontosT\n"),         
        printf("3- area\n");        
        printf("4- densidade\n");        
        printf("5- pib\n");
        break;
    default:
        printf("opcao invalida\n");
        break;
    }
    scanf("%d", &atributo2);

    if (atributo1 == atributo2)
    {
        printf("voce nao pode escolher o mesmo atributo\n");
    }
    
    //carta 1
    switch (atributo1)
    {
    case 1:
        valor1C1 = populacao1; valor1C2 = populacao2;
        break;
    case 2:
        valor1C1 = pontos1; valor1C2 = pontos2;
        break;
    case 3:
        valor1C1 = area1; valor1C2 = area2;
        break;
    case 4:
        valor1C1 = densidade1; valor1C2 = densidade2;
        break;
    case 5:
        valor1C1 = pib1; valor1C2 = pib2;
        break;
    case 6:
        valor1C1 = superpoder1; valor1C2 = superpoder2;
        break;  
    }

    //carta2
    switch (atributo2)
    {
    case 1:
        valor2C1 = populacao1; valor2C2 = populacao2;
        break;
    case 2:
        valor2C1 = pontos1; valor2C2 = pontos2;
        break;
    case 3:
        valor2C1 = area1; valor2C2 = area2;
        break;
    case 4:
        valor2C1 = densidade1; valor2C2 = densidade2;
        break;
    case 5:
        valor2C1 = pib1; valor2C2 = pib2;
        break;
    case 6:
        valor2C1 = superpoder1; valor2C2 = superpoder2;
        break;  
    }

    soma1 = ((atributo1 == 5 ? valor1C1 : valor1C1) +
             (atributo2 == 5 ? valor2C1 : valor2C1));

    soma2 = ((atributo1 == 5 ? valor1C2 : valor1C2) +
             (atributo2 == 5 ? valor2C2 : valor2C2));

    printf("\n");
    
    //resultado da comparacao
    printf("***resultado da comparacao***\n");
    printf("cidade 1: %s, cidade 2: %s\n", cidade1, cidade2);
    
    printf("atributo 1 (escolha %d): %.2f vs %.2f\n", atributo1, valor1C1, valor1C2);
    printf("atributo 2 (escolha %d): %.2f vs %.2f\n", atributo2, valor2C1, valor2C2);

    printf("soma dos atributos: \n");
    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n", cidade2, soma2);

    if (soma1 > soma2)
    {
        printf("resultado final: %s venceu!\n", cidade1);
    } else if (soma2 > soma1){
        printf("resultado final: %s venceu!\n", cidade2);
    } else {
        printf("resultado final: empate!\n");
    }

    return 0;
}
