#include <stdio.h>

int main(){
   char estado[20] = "São Paulo";
   char codigo_da_cidade[30] = "B02";
   char nome_do_estado[30] = "São Paulo";
   int população = 11;
   float área_em_km² = 248.219;
   int PIB = 3.13;
   int numeros_de_pontos_turisticos = 17;

   printf("O estado de %s é ?\n", nome_do_estado);
   scanf("%s", &estado);
   printf("O estado de %s é o %s!\n", nome_do_estado, estado);

   printf("Nosso código é esse aqui caso precise: %s.\n", codigo_da_cidade);
   printf("Tem uma população de %d milhões de habitantes, e com uma área de %f km².\n", 11, 248.219);
   printf("E contamos com %d pontos turisticos.\n", numeros_de_pontos_turisticos);
   printf("Com uma renda bruta de aproximadamente %f milhões.\n", 3.13);


}