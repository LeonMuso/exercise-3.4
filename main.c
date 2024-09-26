#include <stdio.h>

int main(void) {
   char nome, sesso;
   printf("il nome della persona: ");
   scanf("%c", &nome);
   printf("sesso (M o F): ");
   scanf("%s", &sesso);
   if( sesso =='M')
      printf("egregio signor %c ", nome);
    else
        printf("gentilissima signora %c ", nome);
}
