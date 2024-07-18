#include <stdio.h>
#include <stdlib.h>
// asal sayýyý bulan program
int main()
{
    int number,i;
    number=0;
    i=2;
    // i=2 dememizin sebebi her sayý zaten 1 e bölünür o yüzden 2 ile bölmeye baslayacagýz

    printf("Pozitif bir sayi girin:");
    scanf("%d",&number);

    if(number<0)
    {
        printf("pozitif bir sayi girmediniz.Lütfen pozitif bir sayi giriniz! ");
        return 0;
    }
    /*
     asagýda number /2 yazmamýzýn sebebi bir sayý kendisinin yarýsýna kadar olan
     sayýlara bölünemiyorsa geriye kalan diger yarým kýsma zaten bölünemez
     o yüzden yarýsýndan sonrakine bakmaya gerek yok */
    while(i < number/2){
        if(number%i == 0)
        {
            printf("%d sayisi %d sayisina bolunur. Bu yuzden %d asal sayi degildir\n",number,i,number);
            return 0;
        }
        i++;
    }
    printf("%d asal sayidir\n",number);

    return 0;
}
