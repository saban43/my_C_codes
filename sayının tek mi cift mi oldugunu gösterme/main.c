#include <stdio.h>
#include <stdlib.h>


    //ekrana yazılan sayının tek mi cift mi oldugunu yazma
int main()
{
   int number;
   printf("Bir sayi gir:");
   scanf("%d",&number);

   /*
   Biz eger bir sayıyı 2 ye bölüp kalan deger 0 ise o sayı cifttir.
   Ama kalan deger 0 degilse o sayı tekdir.Bunu kullanarak:
   */
    if(number%2 == 0){
        printf("Girdigin sayi cift sayi.\n",number);
    }else{
    printf("Girdigin sayi tek sayi.\n",number);
    }

    //ekstra bilgi: even=cift   odd=tek
    return 0;
}
