#include <stdio.h>
#include <stdlib.h>

int main()
{
   char mokoko[20];
   //burada [] icindeki say� kadar harf depoluyor
   printf("Bir kiz ismi yaziniz:");
   scanf("%s",&mokoko);
   // burada %s yazd�k ��nk� metinsel ifadelerde %s kullan�l�r
   // eger %c yazsayd�k sehrin t�m harfleri gelmeyecekti

   printf("Yarin %s sikeceksin :d",mokoko);
   printf("\n");

    return 0;
}
