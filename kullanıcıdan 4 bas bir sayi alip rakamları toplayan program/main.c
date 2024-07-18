#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 4 basamaklý bir sayýnýn rakamlarý toplamýný hesaplama
    int myNumber,bolum,kalan,sum;
    sum=0;
    //sum toplama demek
    printf("4 basamakli bir sayi giriniz:");
    scanf("%d",&myNumber);

    //4. basamaðý bul

    bolum=myNumber / 1000; // ilk basamaktaki sayý burada
    sum += bolum;
    kalan= myNumber % 1000;  //kalan deger

    //3. basamagý bul
    bolum=kalan / 100; // 2. basamaktaki sayý
    sum += bolum;
    kalan= kalan % 100;  //kalan deger

    //2. basamagý bul
    bolum= kalan / 10;
    sum += bolum;
    kalan= kalan % 10;

    // 1. basamagý bul
    sum += kalan;

    // ekrana yazdýrma zamaný
    printf("girdiginiz sayýnýn rakamlarý toplamý %d",sum);


    return 0;
}
