#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*


   1-ihtiyac�m�z olan variables bul ve tan�mla
   2-variables type bul
   3-form�l� tan�mla
   4-kullan�c�dan verileri al
   5-i�lem yap
   6-c�kt� ver [return]
   */

  float kenar1,kenar2,alan,cevre;

  printf("lutfen dikdortgenin kenar uzunluklar�n� giriniz:\n");
  scanf("%f %f",&kenar1,&kenar2);
  cevre= 2*kenar1 + 2*kenar2;
  alan=kenar1*kenar2;
  printf("senin karenin cevresi %f\n",cevre);
  printf("senin karenin alan� %f",alan);

   return 0;
}
