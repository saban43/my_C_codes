#include <stdio.h>
#include <stdlib.h>

  /*
   elektrik faturas� hesaplama program�

   elektrik sirketi ayl�k olarak harcanan toplam kilowatt saat miktar�nca ve
   belirli bir abonelik �cteri talep etmektedir.Birim kilowatt saat �creti
   ve abonelik �creti her ay ayl�k enflasyon oran�nda artmaktad�r. Buna g�re
   m�sterinin 1 aya ait �deyecegi elektrik faturas�n� hesaplayan program
   Fatura miktar�=Harcanan elektrik* Birim fiyat + Abone �creti
   */

int main()
{
   float odenecekFatura,eskiBirimFiyat,yeniBirimFiyat;
   float enflasyon,eskiAboneUcreti,yeniAboneUcreti;
   int yeniOkuma,eskiOkuma,toplamHarcananElektrik;

   printf("Enflasyon oranini girirniz:");
   scanf("%f",&enflasyon);
   printf("Onceki aya ait birim fiyat miktarini giriniz:");
   scanf("%f",&eskiBirimFiyat);
   printf("Onceki aya ait abonelik ucretini giriniz:");
   scanf("%f",&eskiAboneUcreti);
   printf("Bir �nceki aya ait okuma degerini girirniz:");
   scanf("%d",&eskiOkuma);
   printf("Bu aya ait okuma degerini giriniz:");
   scanf("%d",&yeniOkuma);
   //toplam harcanan elektrigi bulal�m
   toplamHarcananElektrik=yeniOkuma-eskiOkuma;

   //yeni birim fiyat�n� bulal�m
   yeniBirimFiyat=eskiBirimFiyat*(1+enflasyon/100);

   //art�k �denecek faturay� hesaplayabiliriz
   odenecekFatura=toplamHarcananElektrik*yeniBirimFiyat+yeniAboneUcreti;
   // ekrana �denecek fatura miktar�n� yazd�ral�m
   printf("\n odeyeceginiz fatutra miktari %f TL\n\n",odenecekFatura);


    return 0;
}
