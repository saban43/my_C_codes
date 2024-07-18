#include <stdio.h>
#include <stdlib.h>
// basit bir kitap sipari� ve indirim program� yapal�m
int main()
{
    int bookPrice,orderQuantity; //kitab�n fiyat� ve sipari� miktar�n� tutuyoruz
    float discountRate,noDiscountPrice,discountPrice,sum;
    //indirim oran�n�, kitab�n indirimsiz fiyat�n� ve indirimli fiyat�n� tutuyoruz. sum'da da toplam�n� tutuyoruz

    bookPrice=20;  // kitab�m�z 20 lira olsun
    orderQuantity=0; // �imdilik sipari� miktar�n� 0 yapal�m ve kullan�c�dan sipari� miktar�n� girdirelim

    printf("Kac tane kitap siparis etmek istiyorsunuz:");
    scanf("%d",&orderQuantity);

    if (orderQuantity >= 60){   //eger 60 dan fazla ve esit kitap al�rsa indirim oran�n� %30 yapacaz

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
    /*  eger adet 60 dan fazla ise y�zde 30 indirim
        eger adet 60 dan az 30 dan fazla ise y�zde 20 indirim
        eger adet 30 dan az 10 dan fazla ise y�zde 10 indirim
        eger adet 10 dan az ise y�zde 1 indirim
    */

    noDiscountPrice=orderQuantity * bookPrice;  //indirimsiz fiyat�
    printf("Kitabin indirimsiz fiyat� :%.2f TL\n",noDiscountPrice);

    discountPrice=orderQuantity * bookPrice * discountRate;  //indirimli fiyati
    printf("�ndirim tutariniz :%.2f TL\n",discountPrice);
    sum=noDiscountPrice - discountPrice;
    printf("Siparislerinizin toplam tutari :%.2f TL\n\n",sum);


    return 0;
}
