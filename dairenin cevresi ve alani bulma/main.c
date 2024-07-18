#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*


   1-ihtiyacýmýz olan variables bul ve tanýmla
   2-variables type bul
   3-formülü tanýmla
   4-kullanýcýdan verileri al
   5-iþlem yap
   6-cýktý ver [return]
   */

  float kenar1,kenar2,alan,cevre;

  printf("lutfen dikdortgenin kenar uzunluklarýný giriniz:\n");
  scanf("%f %f",&kenar1,&kenar2);
  cevre= 2*kenar1 + 2*kenar2;
  alan=kenar1*kenar2;
  printf("senin karenin cevresi %f\n",cevre);
  printf("senin karenin alaný %f",alan);

   return 0;
}
