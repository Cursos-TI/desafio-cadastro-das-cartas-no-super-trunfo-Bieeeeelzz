#include <stdio.h>

int main(){
   char estado[20] = "Distrito Federal";
   char codigo_da_cidade[20] = "A01";
   char nome_do_estado[20] = "Brasília";
   int população = 2817000;
   float área_em_km² = 5.802;
   int PIB = 30;
   int numeros_de_pontos_turisticos = 8;

   printf("O estado de %s é ?\n", nome_do_estado);
   scanf("%s", &estado);
   printf("O estado de %s é o %s!\n", nome_do_estado, estado);

   printf("Nosso código é esse aqui caso precise: %s.\n", codigo_da_cidade);
   printf("Tem uma população de %d habitantes, e com uma área de %f km².\n", 2817000, 5.802);
   printf("E contamos com %d pontos turisticos.\n", numeros_de_pontos_turisticos);
   printf("Com uma renda bruta de aproximadamente %i milhões.\n", 30);
   

}