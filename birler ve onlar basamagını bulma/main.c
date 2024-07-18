#include <stdio.h>
#include <stdlib.h>


// 1- Girirlen sayýnýn onlar ve birler basamagýný bulan program

int main()
{
   int  myNumber,first,second;

   printf("Pozitif bir sayi giriniz:");
   scanf("%d"&myNumber);

   first=myNumber%10; //birler basamagýný buluyoruz
   printf("girirlen sayinin birler basamagi %d\n",first);


   second=(myNumber%100)/10; //Onlar basamagýný buluyoruz
   printf("girirlen sayinin onlar basamagi %d\n",second);




    return 0;
}
