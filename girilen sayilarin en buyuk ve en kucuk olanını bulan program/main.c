#include <stdio.h>
#include <stdlib.h>



int main()
{
    int sayi,i=1,enBuyukSayi=0,enKucukSayi=0;

    do{
        printf("%d. sayiyi giriniz:",i);
        scanf("%d",&sayi);

        if( sayi == 0) break;  //if den sonra 1 satýr kod yazacaksak süslü paranteze gerek yok

        if(sayi<enKucukSayi)    enKucukSayi = sayi;
        if(sayi>enBuyukSayi)    enBuyukSayi = sayi;

        i++;
    }while(sayi != 0);

    printf("Girdiginiz sayilarin en buyugu %d\n",enBuyukSayi);
    printf("Girdiginiz sayilarin en kucugu %d\n",enKucukSayi);

    return 0;
}

