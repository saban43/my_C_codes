#include <stdio.h>
#include <stdlib.h>


    //ekrana yaz�lan say�n�n tek mi cift mi oldugunu yazma
int main()
{
   int number;
   printf("Bir sayi gir:");
   scanf("%d",&number);

   /*
   Biz eger bir say�y� 2 ye b�l�p kalan deger 0 ise o say� cifttir.
   Ama kalan deger 0 degilse o say� tekdir.Bunu kullanarak:
   */
    if(number%2 == 0){
        printf("Girdigin sayi cift sayi.\n",number);
    }else{
    printf("Girdigin sayi tek sayi.\n",number);
    }

    //ekstra bilgi: even=cift   odd=tek
    return 0;
}
