#include <stdio.h>

int main(){
   

   char Carta_1[20] = "Super Biel";
   char Estado[20] = "São Paulo";
   char Código[10] = "B02";
   char Nome_da_Cidade[20] = "São Paulo";
   int População = 11450000;
   float Área = 248.222 /*km²*/;
   float PIB = 1.6 /*trilhões de reais*/;
   int Número_de_Pontos_Turísticos = 36;
   float Resultado;
   float Resultado1;

   //float Densidade_Populacional = hab/km²
   //float PIB_per_Capita = reais
   
   printf("O Estado é: %s!\n", Estado);
   printf("O estado do %s é %s!\n", Nome_da_Cidade, Estado);
   printf("Nosso código é esse aqui caso precise: %s.\n", Código);
   printf("Temos uma população de %d milhões de habitantes, e com uma área de %.3f km².\n", População, Área);
   printf("E contamos com %d pontos turisticos.\n", Número_de_Pontos_Turísticos);
   printf("Com uma renda bruta de aproximadamente R$%.2f trilhões.\n", PIB);

   printf("Digite a População: \n");
   scanf("%d", &População);

   printf("Digite a Área da Cidade: \n");
   scanf("%f", &Área);

   Resultado = (11450000 / 248.222);

   printf("A Densidade Populacional é: %.2f hab/km² \n", Resultado);

   printf("PIB: \n");
   scanf("%f", &PIB);

   printf("Digite a População: \n");
   scanf("%d", &População);

   Resultado1 = (float)(População / PIB);

   printf("PIB per Capita: %f \n", Resultado1);


   

   return 0;


}
