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

    //Variaveis para menu e comparação 
    int menu_compara;
    char menu_compara_populacao;
    char menu_compara_area;
    char menu_compara_pib;
    char menu_compara_densidade;
    char menu_compara_pib_capta;   

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

    printf("\n **** **** **** V I S U A L I Z A Ç Ã O **** **** ****  \n\n");

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

    // --- Propriedades menu interativo
    printf("**** **** -COMPARAÇÃO DE ATRIBUTOS DA CARTA- **** **** \n\n");
    printf("Escolha uma das opções para comparação:\n");
    printf("1 - Comparar população :\n");
    printf("2 - Comparar área: \n");
    printf("3 - Comparar PIB: \n");
    printf("4 - Comparar Densidade Populacional: \n");
    printf("5 - Comparar PIB per capta: \n");
    printf("6- Comparar dois artibutos: \n");
    scanf("%d", &menu_compara);   
    
    switch (menu_compara) // Menu principal
    {
    case 1:
        printf("\n-------- Escolha a carta para comparar a população! --------\n\n");
        printf("a - Carta: %s com Carta: %s\n", cidade_a01, cidade_b01); //Menu alternativo para população
        printf("b - Carta: %s com Carta: %s\n", cidade_a02, cidade_b02);        
        scanf("%s", &menu_compara_populacao);

            switch (menu_compara_populacao)//Menu compara população
            {
            case 'a'://Comparação A01 com B01
                printf("Carta: %s - Estado: %s, Código: %s, População: %lu\n",cidade_a01, estado_A, codigo_a01, populacao_a01); 
                printf("Carta: %s - Estado: %s, Código: %s, População: %lu\n",cidade_b01, estado_B, codigo_b01, populacao_b01);
                (populacao_a01 > populacao_b01) ? printf("Resultado: Carta %s é a vencedora!\n", cidade_a01) : printf("Resultado: Carta %s é a vencedora!\n", cidade_b01);                   
            break;
            case 'b'://Comparação A02 com B02
                printf("Carta: %s - Estado: %s, Código: %s, População: %lu\n",cidade_a02, estado_A, codigo_a02, populacao_a02);
                printf("Carta: %s - Estado: %s, Código: %s, População: %lu\n",cidade_b02, estado_B, codigo_b02, populacao_b02);
                (populacao_a02 > populacao_b02) ? printf("Resultado: Carta %s é a vencedora!\n", cidade_a02) : printf("Resultado: Carta %s é a vencedora!\n", cidade_b02);           
            break;
            }
    break;           
    case 2:
        printf("-------- Escolha a carta para comparar a área! --------\n\n");
        printf("a - Carta: %s com Carta: %s\n", cidade_a01, cidade_b01); //Menu alternativo para área
        printf("b - Carta: %s com Carta: %s\n", cidade_a02, cidade_b02);        
        scanf("%s", &menu_compara_area);

            switch (menu_compara_area)//Menu compara area
            {
            case 'a'://Comparação A01 com B01
                printf("Carta: %s - Estado: %s, Código: %s, Área: %.2f Km²\n",cidade_a01, estado_A, codigo_a01, km_area_a01); 
                printf("Carta: %s - Estado: %s, Código: %s, Área: %.2f Km²\n",cidade_b01, estado_B, codigo_b01, km_area_b01);
                (km_area_a01 > km_area_b01) ? printf("Resultado: Carta %s é a vencedora!\n", cidade_a01) : printf("Resultado: Carta %s é a vencedora!\n", cidade_b01);               
            break;
            case 'b'://Comparação A02 com B02
                printf("Carta: %s - Estado: %s, Código: %s, Área: %.2f Km²\n",cidade_a02, estado_A, codigo_a02, km_area_a02);
                printf("Carta: %s - Estado: %s, Código: %s, Área: %.2f Km²\n",cidade_b02, estado_B, codigo_b02, km_area_b02);
                (km_area_a02 > km_area_b02) ? printf("Resultado: Carta %s é a vencedora!\n", cidade_a02) : printf("Resultado: Carta %s é a vencedora!\n", cidade_b02);            
            break;
            }
    break;
    case 3:
        printf("-------- Escolha a carta para comparar o PIB! --------\n\n");
        printf("a - Carta: %s com Carta: %s\n", cidade_a01, cidade_b01); //Menu alternativo para PIB
        printf("b - Carta: %s com Carta: %s\n", cidade_a02, cidade_b02);        
        scanf("%s", &menu_compara_pib);

            switch (menu_compara_pib) //Menu compara PIB 
            {           
            case 'a'://Comparação A01 com B01
                printf("Carta: %s - Estado: %s, Código: %s, PIB: R$ %.2f\n",cidade_a01, estado_A, codigo_a01, pib_a01); 
                printf("Carta: %s - Estado: %s, Código: %s, PIB: R$ %.2f\n",cidade_b01, estado_B, codigo_b01, pib_b01);
                (pib_a01 > pib_b01) ? printf("Resultado: Carta %s é a vencedora!\n", cidade_a01) : printf("Resultado: Carta %s é a vencedora!\n", cidade_b01);                   
            break;
            case 'b'://Comparação A02 com B02
                printf("Carta: %s - Estado: %s, Código: %s, PIB: R$ %.2f \n",cidade_a02, estado_A, codigo_a02, pib_a02);
                printf("Carta: %s - Estado: %s, Código: %s, PIB: R$ %.2f \n",cidade_b02, estado_B, codigo_b02, pib_b02);
                (pib_a02 > pib_b02) ? printf("Resultado: Carta %s é a vencedora!\n", cidade_a02) : printf("Resultado: Carta %s é a vencedora!\n", cidade_b02);            
            break;
            }
    break;
    case 4:
        printf("-------- Escolha a carta para comparar a Densidade Populacional! --------\n\n");
        printf("a - Carta: %s com Carta: %s\n", cidade_a01, cidade_b01); //Menu alternativo para densidade
        printf("b - Carta: %s com Carta: %s\n", cidade_a02, cidade_b02);        
        scanf("%s", &menu_compara_densidade);

            switch (menu_compara_densidade)//Menu compara densidade
            {
            case 'a'://Comparação A01 com B01
                printf("Carta: %s - Estado: %s, Código: %s, Densidade Populacional: %.2f hab/Km²\n",cidade_a01, estado_A, codigo_a01, densidade_a01); 
                printf("Carta: %s - Estado: %s, Código: %s, Densidade Populacional: %.2f hab/Km²\n",cidade_b01, estado_B, codigo_b01, densidade_b01);
                (densidade_a01 < densidade_b01) ? printf("Resultado: Carta %s é a vencedora!\n", cidade_a01) : printf("Resultado: Carta %s é a vencedora!\n", cidade_b01);                  
            break;
            case 'b'://Comparação A02 com B02
                printf("Carta: %s - Estado: %s, Código: %s, Densidade Populacional: %.2f hab/Km²\n",cidade_a02, estado_A, codigo_a02, densidade_a02);
                printf("Carta: %s - Estado: %s, Código: %s, Densidade Populacional: %.2f hab/Km²\n",cidade_b02, estado_B, codigo_b02, densidade_b02);
                (densidade_a02 < densidade_b02) ? printf("Resultado: Carta %s é a vencedora!\n", cidade_a02) : printf("Resultado: Carta %s é a vencedora!\n", cidade_b02);            
            break; 
            }           
    break;
    case 5:
        printf("-------- Escolha a carta para comparar a PIB per capta! --------\n\n");
        printf("a - Carta: %s com Carta: %s\n", cidade_a01, cidade_b01); //Menu alternativo para PIB per capta
        printf("b - Carta: %s com Carta: %s\n", cidade_a02, cidade_b02);        
        scanf("%s", &menu_compara_pib_capta);

            switch (menu_compara_pib_capta)//Menu compara PIB per capta
            {
            case 'a'://Comparação A01 com B01
                printf("Carta: %s - Estado: %s, Código: %s, PIB per capta: %.2f\n",cidade_a01, estado_A, codigo_a01, pib_capta_a01); 
                printf("Carta: %s - Estado: %s, Código: %s, PIB per capta: %.2f\n",cidade_b01, estado_B, codigo_b01, pib_capta_b01);
                (pib_capta_a01 > pib_capta_b01) ? printf("Resultado: Carta %s é a vencedora!\n", cidade_a01) : printf("Resultado: Carta %s é a vencedora!\n", cidade_b01);
                   
            break;
            case 'b'://Comparação A02 com B02
                printf("Carta: %s - Estado: %s, Código: %s, PIB per capta: %.2f\n",cidade_a02, estado_A, codigo_a02, pib_capta_a02);
                printf("Carta: %s - Estado: %s, Código: %s, PIB per capta: %.2f\n",cidade_b02, estado_B, codigo_b02, pib_capta_b02);
                (pib_capta_a02 > pib_capta_b02) ? printf("Resultado: Carta %s é a vencedora!\n", cidade_a02) : printf("Resultado: Carta %s é a vencedora!\n", cidade_b02);
            break;
            }
    
    break;    
    default:
        printf("### Ação inválida ####");
  

    return 0;
}
