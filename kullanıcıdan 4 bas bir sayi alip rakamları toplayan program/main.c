#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 4 basamakl� bir say�n�n rakamlar� toplam�n� hesaplama
    int myNumber,bolum,kalan,sum;
    sum=0;
    //sum toplama demek
    printf("4 basamakli bir sayi giriniz:");
    scanf("%d",&myNumber);

    //4. basama�� bul

    bolum=myNumber / 1000; // ilk basamaktaki say� burada
    sum += bolum;
    kalan= myNumber % 1000;  //kalan deger

    //3. basamag� bul
    bolum=kalan / 100; // 2. basamaktaki say�
    sum += bolum;
    kalan= kalan % 100;  //kalan deger

    //2. basamag� bul
    bolum= kalan / 10;
    sum += bolum;
    kalan= kalan % 10;

    // 1. basamag� bul
    sum += kalan;

    // ekrana yazd�rma zaman�
    printf("girdiginiz say�n�n rakamlar� toplam� %d",sum);


    return 0;
}
