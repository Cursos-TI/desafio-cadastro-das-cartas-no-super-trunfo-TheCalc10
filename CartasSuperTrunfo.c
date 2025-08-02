#include <stdio.h>

int main() {
    //  Cadastramento da primeira carta
    char estado1; // Letra do estado
    char codigo1[05]; // Código do estado e da carta
    char cidade1[20]; // Nome da cidade
    int populacao1; // População da cidade
    float area1; // Área em quilômetros quadrados (km²)
    float pib1; // Produto Interno Bruto (PIB) da cidade
    int pontosturisticos1; // Quantidade de Pontos Turísticos da cidade
    printf("Cadastre a primeira carta \n"); // Indicação para o usuário cadastrar a primeira carta
    printf("Digite a letra do estado: \n");
    scanf("%c", &estado1);
    printf("Digite o código da primeira carta: \n");
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);
    printf("Digite a população: \n");
    scanf("%d", &populacao1);
    printf("Digite a área em quilômetros quadrados \n");
    scanf("%f", &area1);
    printf("Digite o Produto Interno Bruto (PIB) em bilhões de reais \n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos \n");
    scanf("%d", &pontosturisticos1); // Depois de digitar os dados, o programa irá calcular mais duas informações abaixo:
    float densidadepopulacional1 = populacao1 / area1; // Densidade populacional calculada efetuando a divisão da população pela área da cidade                      
    float pib1x = pib1 * 1000000000; // Como o PIB foi inserido em bilhões de reais, o valor será multiplicado por R$ 1.000.000.000 para o próximo passo                                       
    float pibpercapita1 = pib1x / populacao1; // Valor do PIB foi ajustado no passo anterior, para que possa ser divido pela população da cidade, e nos dê o valor correto do PIB per capita
    
    //  Cadastramento da segunda carta
    char estado2;
    char codigo2[05];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    printf("Cadastre a segunda carta \n");
    printf("Digite a letra do estado: \n");
    scanf(" %c", &estado2);  // Código ligeiramente modificado além do esperado para limpar o buffer
    printf("Digite o código da segunda carta: \n");
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);
    printf("Digite a população: \n");
    scanf("%d", &populacao2);
    printf("Digite a área em quilômetros quadrados \n");
    scanf("%f", &area2);
    printf("Digite o Produto Interno Bruto (PIB) em bilhões de reais \n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos \n");
    scanf("%d", &pontosturisticos2);
    float densidadepopulacional2 = populacao2 / area2;                      
    float pib2x = pib2 * 1000000000;                                        
    float pibpercapita2 = pib2x / populacao2;


    //  Exibição da primeira carta na tela
    printf("\n"); // pular uma linha
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1); // .2f indicando duas casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);    
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    //  Exibição da segunda carta na tela
    printf("\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);    
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    return 0;
}