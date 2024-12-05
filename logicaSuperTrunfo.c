#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // variaveis para armazenar o estado
    char estado_A[40], estado_B[40]; 

    // variaveis para dados da cidade
    char cidade_a01[30], cidade_a02[30],cidade_b01[30], cidade_b02[30];
    char codigo_a01[4], codigo_a02[4], codigo_b01[4], codigo_b02[4];     
    
    // Variaveis para propriedades da cidade
    unsigned long int populacao_a01, populacao_a02, populacao_b01, populacao_b02;
    int turistico_a01, turistico_a02, turistico_b01, turistico_b02;
    float km_area_a01, km_area_a02, km_area_b01, km_area_b02;
    float pib_a01, pib_a02, pib_b01, pib_b02;

    // Variaveis para densidade e pib capta
    float densidade_a01, densidade_a02, densidade_b01, densidade_b02;
    float pib_capta_a01, pib_capta_a02, pib_capta_b01, pib_capta_b02;

    // cadastro dos estados
    printf("Digite o nome do 1° estado: \n");
    scanf("%s", estado_A);
    printf("Digite o nome do 2° estado: \n");
    scanf("%s", estado_B);

    printf("\nCadastro de cartas: --------------------- Cidade: %s \n\n", estado_A);

    // Cadastro da carta primeria cidade do estado_A:
    printf("Digite o nome da 1° cidade de %s: \n", estado_A);
    scanf("%s", cidade_a01);
    printf("Digite o código da cidade: \n");
    scanf("%s", codigo_a01);
    printf("Digite a população: \n");
    scanf("%lu", &populacao_a01);
    printf("Digite a área em Km²: \n");
    scanf("%f", &km_area_a01);
    printf("Digite o PIB: \n");
    scanf("%f", &pib_a01);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turistico_a01);

    //lógica para densidade e pib   
    densidade_a01 = (float) populacao_a01 / km_area_a01;
    pib_capta_a01 = (float) pib_a01 / populacao_a01;

    printf("\n-----------------------------------------------\n\n");

    // Cadastro de carta segunda cidade do estado_A:
    printf("Digite o nome da 2° cidade de %s: \n", estado_A);
    scanf("%s", cidade_a02);
    printf("Digite o código da cidade: \n");
    scanf("%s", codigo_a02);
    printf("Digite a população: \n");
    scanf("%lu", &populacao_a02);
    printf("Digite a área em Km²: \n");
    scanf("%f", &km_area_a02);
    printf("Digite o PIB: \n");
    scanf("%f", &pib_a02);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turistico_a02);

    //lógica para densidade e pib   
    densidade_a02 = (float) populacao_a02 / km_area_a02;
    pib_capta_a02 = (float) pib_a02 / populacao_a02; 

    printf("\n **** **** -CARTA CADASTRADA COM SUCESSO- **** ****  \n");

    printf("\nCadastro de cartas: --------------------- Cidade: %s \n\n", estado_B);

    // Cadastro da primeria cidade do estado_B:
    printf("Digite o nome da 1° cidade de %s: \n", estado_B);
    scanf("%s", cidade_b01);
    printf("Digite o código da cidade: \n");
    scanf("%s", codigo_b01);
    printf("Digite a população: \n");
    scanf("%lu", &populacao_b01);
    printf("Digite a área em Km²: \n");
    scanf("%f", &km_area_b01);
    printf("Digite o PIB: \n");
    scanf("%f", &pib_b01);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turistico_b01);

    //lógica para densidade e pib   
    densidade_b01 = (float) populacao_b01 / km_area_b01;
    pib_capta_b01 = (float) pib_b01 / populacao_b01;   

    printf("\n-----------------------------------------------\n\n");

    // Cadastro de carta segunda cidade do estado_B:
    printf("Digite o nome da 2° cidade de %s: \n", estado_B);
    scanf("%s", cidade_b02);
    printf("Digite o código da cidade: \n");
    scanf("%s", codigo_b02);
    printf("Digite a população: \n");
    scanf("%lu", &populacao_b02);
    printf("Digite a área em Km²: \n");
    scanf("%f", &km_area_b02);
    printf("Digite o PIB: \n");
    scanf("%f", &pib_b02);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turistico_b02);

    //lógica para densidade e pib   
    densidade_b02 = (float) populacao_b02 / km_area_b02;
    pib_capta_b02 = (float) pib_b02 / populacao_b02; 

    printf(" **** **** **** V I S U A L I Z A Ç Ã O **** **** ****  \n\n");

    //Estado A
    printf("Estado: %s \n\n", estado_A);
    //Cidade 01
    printf("Cidade: %s \nCódigo: %s \nPopulação: %lu hab. \nÁrea: %.2f Km² \nPIB: R$ %.1f \nPontos Turísticos: %d \nDensidade Populacional: %.2f hab/km² \nPIB per capta: R$ %.2f \n\n", cidade_a01, codigo_a01, populacao_a01, km_area_a01, pib_a01, turistico_a01, densidade_a01, pib_capta_a01);
    //Cidade 02
    printf("Cidade: %s \nCódigo: %s \nPopulação: %lu hab. \nÁrea: %.2f Km² \nPIB: R$ %.1f \nPontos Turísticos: %d \nDensidade Populacional: %.2f hab/km² \nPIB per capta: R$ %.2f \n\n", cidade_a02, codigo_a02, populacao_a02, km_area_a02, pib_a02, turistico_a02, densidade_a02, pib_capta_a02);
   
    printf("\n-----------------------------------------------\n\n");
    //Estado B
    printf("Estado: %s \n\n", estado_B);
    //Cidade 01
    printf("Cidade: %s \nCódigo: %s \nPopulação: %lu hab. \nÁrea: %.2f Km² \nPIB: R$ %.1f \nPontos Turísticos: %d \nDensidade Populacional: %.2f hab/km² \nPIB per capta: R$ %.2f \n\n", cidade_b01, codigo_b01, populacao_b01, km_area_b01, pib_b01, turistico_b01, densidade_b01, pib_capta_b01);
    //Cidade 02
    printf("Cidade: %s \nCódigo: %s \nPopulação: %lu hab. \nÁrea: %.2f Km² \nPIB: R$ %.1f \nPontos Turísticos: %d \nDensidade Populacional: %.2f hab/km² \nPIB per capta: R$ %.2f \n\n", cidade_b02, codigo_b02, populacao_b02, km_area_b02, pib_b02, turistico_b02, densidade_b02, pib_capta_b02);

    printf("** C O M P A R A Ç Ã O ** P O P U L A Ç Ã O **\n");
    printf("Carta: %s - Estado: %s, Código: %s, População: %lu\n",cidade_a01, estado_A, codigo_a01, populacao_a01);
    printf("Carta: %s - Estado: %s, Código: %s, População: %lu\n",cidade_b01, estado_B, codigo_b01, populacao_b01);
    if (populacao_a01 > populacao_b01){
        printf("Resultado: %s é a vencedora!\n\n", cidade_a01);
    } else{
        printf("Resultado: %s é a vencedora!\n\n", cidade_b01);
    }

    printf("** C O M P A R A Ç Ã O ** Á R E A **\n");
    printf("Carta: %s - Estado: %s, Código: %s, Área: %.2f km²\n",cidade_a01, estado_A, codigo_a01, km_area_a01);
    printf("Carta: %s - Estado: %s, Código: %s, Área: %.2f km²\n",cidade_b01, estado_B, codigo_b01, km_area_b01);
    if (km_area_a01 > km_area_b01){
        printf("Resultado: %s é a vencedora!\n\n", cidade_a01);
    } else {
        printf("Resultado: %s é a vencedora!\n\n", cidade_b01);
    }
    
    printf("** C O M P A R A Ç Ã O ** P I B **\n");
    printf("Carta: %s - Estado: %s, Código: %s, PIB: R$ %.2f \n",cidade_a01, estado_A, codigo_a01, pib_a01);
    printf("Carta: %s - Estado: %s, Código: %s, PIB: R$ %.2f \n",cidade_b01, estado_B, codigo_b01, pib_b01);
    if (pib_a01 > pib_b01){
        printf("Resultado: %s é a vencedora!\n\n", cidade_a01);
    } else {
        printf("Resultado: %s é a vencedora!\n\n", cidade_b01);
    }

    printf("** C O M P A R A Ç Ã O ** D E N S I D A D E ** POPU. **\n");
    printf("Carta: %s - Estado: %s, Código: %s, Densidade populacional: %.2f hab/km²\n",cidade_a01, estado_A, codigo_a01, densidade_a01);
    printf("Carta: %s - Estado: %s, Código: %s, Densidade populacional: %.2f hab/km²\n",cidade_b01, estado_B, codigo_b01, densidade_b01);
    if (densidade_a01 < densidade_b01){
        printf("Resultado: %s é a vencedora!\n\n", cidade_a01);
    } else {
        printf("Resultado: %s é a vencedora!\n\n", cidade_b01);
    }
    
    printf("** C O M P A R A Ç Ã O ** PIB ** C A P T A **\n");
    printf("Carta: %s - Estado: %s, Código: %s, PIB per capta: R$ %.2f \n",cidade_a01, estado_A, codigo_a01, pib_capta_a01);
    printf("Carta: %s - Estado: %s, Código: %s, PIB per capta: R$ %.2f \n",cidade_b01, estado_B, codigo_b01, pib_capta_b01);
    if (pib_capta_a01 > pib_capta_b01){
        printf("Resultado: %s é a vencedora!\n\n", cidade_a01);
    } else {
        printf("Resultado: %s é a vencedora!\n\n", cidade_b01);
    }
    
    
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

    return 0;
}
