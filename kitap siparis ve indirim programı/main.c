#include <stdio.h>
#include <stdlib.h>
// basit bir kitap sipariþ ve indirim programý yapalým
int main()
{
    int bookPrice,orderQuantity; //kitabýn fiyatý ve sipariþ miktarýný tutuyoruz
    float discountRate,noDiscountPrice,discountPrice,sum;
    //indirim oranýný, kitabýn indirimsiz fiyatýný ve indirimli fiyatýný tutuyoruz. sum'da da toplamýný tutuyoruz

    bookPrice=20;  // kitabýmýz 20 lira olsun
    orderQuantity=0; // þimdilik sipariþ miktarýný 0 yapalým ve kullanýcýdan sipariþ miktarýný girdirelim

    printf("Kac tane kitap siparis etmek istiyorsunuz:");
    scanf("%d",&orderQuantity);

    if (orderQuantity >= 60){   //eger 60 dan fazla ve esit kitap alýrsa indirim oranýný %30 yapacaz

        discountRate=0.30;
    }else{
        if(orderQuantity>=30 && orderQuantity<60){ //30<x<60  ifadesi  (&& ve demek)
            discountRate=0.20;
        }else if(orderQuantity>=10 && orderQuantity<30){ //10<x<30
            discountRate=0.12;
        }else{ //x<10
            discountRate=0.01;
        }
    }
    /*  eger adet 60 dan fazla ise yüzde 30 indirim
        eger adet 60 dan az 30 dan fazla ise yüzde 20 indirim
        eger adet 30 dan az 10 dan fazla ise yüzde 10 indirim
        eger adet 10 dan az ise yüzde 1 indirim
    */

    noDiscountPrice=orderQuantity * bookPrice;  //indirimsiz fiyatý
    printf("Kitabin indirimsiz fiyatý :%.2f TL\n",noDiscountPrice);

    discountPrice=orderQuantity * bookPrice * discountRate;  //indirimli fiyati
    printf("Ýndirim tutariniz :%.2f TL\n",discountPrice);
    sum=noDiscountPrice - discountPrice;
    printf("Siparislerinizin toplam tutari :%.2f TL\n\n",sum);


    return 0;
}
