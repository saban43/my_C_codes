#include <stdio.h>
#include <stdlib.h>
// asal say�y� bulan program
int main()
{
    int number,i;
    number=0;
    i=2;
    // i=2 dememizin sebebi her say� zaten 1 e b�l�n�r o y�zden 2 ile b�lmeye baslayacag�z

    printf("Pozitif bir sayi girin:");
    scanf("%d",&number);

    if(number<0)
    {
        printf("pozitif bir sayi girmediniz.L�tfen pozitif bir sayi giriniz! ");
        return 0;
    }
    /*
     asag�da number /2 yazmam�z�n sebebi bir say� kendisinin yar�s�na kadar olan
     say�lara b�l�nemiyorsa geriye kalan diger yar�m k�sma zaten b�l�nemez
     o y�zden yar�s�ndan sonrakine bakmaya gerek yok */
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
