#include <stdio.h>
#include <stdlib.h>

int main()
{
   char mokoko[20];
   //burada [] icindeki sayý kadar harf depoluyor
   printf("Bir kiz ismi yaziniz:");
   scanf("%s",&mokoko);
   // burada %s yazdýk çünkü metinsel ifadelerde %s kullanýlýr
   // eger %c yazsaydýk sehrin tüm harfleri gelmeyecekti

   printf("Yarin %s sikeceksin :d",mokoko);
   printf("\n");

    return 0;
}
