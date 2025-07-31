#include <stdio.h>

   int main(){

     char estado1, codigodacarta1[20], nomedacidade1[20];
     int populacao1, pontosturisticos1;
     float area1, pib1;

     char estado2, codigocarta2[20], nomedacidade2[20];
     int populacao2, pontosturisticos2;
     float area2, pib2;

     
     // Cadastro da Carta 01:

     printf("=== Cadastro da Carta 01 === \n");
     printf("Estado: \n");
     scanf(" %c", &estado1);

     printf("Código da Carta: \n");
     scanf("%s", codigodacarta1);
      
     printf("Nome da Cidade: \n");
     scanf("%s", nomedacidade1);

     printf("População: \n");
     scanf("%d", &populacao1);

     printf("Área: \n");
     scanf("%f", &area1);

     printf("PIB: \n");
     scanf("%f", &pib1);

     printf("Pontos Turísticos: \n");
     scanf("%d", &pontosturisticos1);

     // Cadastro da Carta 02:

     printf("=== Cadastro da Carta 02 === \n");
     printf("Estado: \n");
     scanf(" %c", &estado2);

     printf("Código da Carta: \n");
     scanf(" %s", codigocarta2);

     printf("Nome da Cidade: \n");
     scanf(" %s", nomedacidade2);

     printf("População: \n");
     scanf("%d", &populacao2);

     printf("Área: \n");
     scanf("%f", &area2);

     printf("PIB: \n");
     scanf("%f", &pib2);

     printf("Pontos Turísticos: \n");
     scanf("%d", &pontosturisticos2);

     printf("\n------------------------\n\n");
     
     // Saída das Cartas:

     printf("=== Carta 1 === \n");
     printf("Estado: %c\n", estado1);
     printf("Código da Carta: %s\n", codigodacarta1);
     printf("Nome da Cidade: %s\n", nomedacidade1);
     printf("População: %d habitantes\n", populacao1);
     printf("Área: %.2f km²\n", area1);
     printf("PIB: %.2f bilhões de reais\n", pib1);
     printf("Pontos Turísticos: %d\n", pontosturisticos1);

     printf("\n---------------------------\n\n");


     printf("=== Carta 2 === \n");
     printf("Estado: %c\n", estado2);
     printf("Código da Carta: %s\n", codigocarta2);
     printf("Nome da Cidade: %s\n", nomedacidade2);
     printf("População: %d habitantes\n", populacao2);
     printf("Área: %.2f km²\n", area2);
     printf("PIB: %.2f bilhões de reais\n", pib2);
     printf("Pontos Turísticos: %d\n", pontosturisticos2);


    



    
   }