#include <stdio.h>
#include <stdlib.h>

  /*
   elektrik faturasý hesaplama programý

   elektrik sirketi aylýk olarak harcanan toplam kilowatt saat miktarýnca ve
   belirli bir abonelik ücteri talep etmektedir.Birim kilowatt saat ücreti
   ve abonelik ücreti her ay aylýk enflasyon oranýnda artmaktadýr. Buna göre
   müsterinin 1 aya ait ödeyecegi elektrik faturasýný hesaplayan program
   Fatura miktarý=Harcanan elektrik* Birim fiyat + Abone ücreti
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
   printf("Bir önceki aya ait okuma degerini girirniz:");
   scanf("%d",&eskiOkuma);
   printf("Bu aya ait okuma degerini giriniz:");
   scanf("%d",&yeniOkuma);
   //toplam harcanan elektrigi bulalým
   toplamHarcananElektrik=yeniOkuma-eskiOkuma;

   //yeni birim fiyatýný bulalým
   yeniBirimFiyat=eskiBirimFiyat*(1+enflasyon/100);

   //artýk ödenecek faturayý hesaplayabiliriz
   odenecekFatura=toplamHarcananElektrik*yeniBirimFiyat+yeniAboneUcreti;
   // ekrana ödenecek fatura miktarýný yazdýralým
   printf("\n odeyeceginiz fatutra miktari %f TL\n\n",odenecekFatura);


    return 0;
}
