#include <stdio.h>
#include <stdlib.h>

// 4 basamakl� �zel say�y� tespit eden program

// Bizim �zel say�m�z abcd=(ab+cd)*(ab+cd)  olsun
int main()
{
  int number,newNumber,part1,part2;
  printf("Pozitif 4 basamakli bir sayi giriniz:");
  scanf("%d",&number,&newNumber);

  /* 4 basamakl� bir say�y� 100 e b�lersek elde ettigimiz b�l�m ilk 2 basamag�,
  kalan ise son 2 basamag� bize verir */

  part1=number/100;  //say�n�n ilk iki basamag�
  part2=number%100;  //say�n�n son iki basamag�

   newNumber=(part1+part2)*(part1+part2);
   if(newNumber == number){
    printf("%d aradigimiz ozel sayimiz\n",number);
   }else{
    printf("%d ozel bir sayi degil. Bu sayidan bi cacik olmaz evlat\n",number);
   }

    return 0;
}
