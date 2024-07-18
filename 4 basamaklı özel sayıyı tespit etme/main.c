#include <stdio.h>
#include <stdlib.h>

// 4 basamaklı özel sayıyı tespit eden program

// Bizim özel sayımız abcd=(ab+cd)*(ab+cd)  olsun
int main()
{
  int number,newNumber,part1,part2;
  printf("Pozitif 4 basamakli bir sayi giriniz:");
  scanf("%d",&number,&newNumber);

  /* 4 basamaklı bir sayıyı 100 e bölersek elde ettigimiz bölüm ilk 2 basamagı,
  kalan ise son 2 basamagı bize verir */

  part1=number/100;  //sayının ilk iki basamagı
  part2=number%100;  //sayının son iki basamagı

   newNumber=(part1+part2)*(part1+part2);
   if(newNumber == number){
    printf("%d aradigimiz ozel sayimiz\n",number);
   }else{
    printf("%d ozel bir sayi degil. Bu sayidan bi cacik olmaz evlat\n",number);
   }

    return 0;
}
