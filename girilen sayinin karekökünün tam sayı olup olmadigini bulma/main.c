#include <stdio.h>
#include <stdlib.h>

int main()
{
   int number,squareRoot;

   printf("Pozitif bir sayi gir:");
   scanf("%d",&number);

   if( number < 0 ){
    printf("Guzel kardesim bu sayi negatif.Sana pozitif sayi gir dedim la\n");
   }else{
    // sqrt bir say�n�n karek�k�n� alan bir haz�r fonksiyon
    // sqrt()  parantezin icine yaz�lan say�n�n karek�k�n� al�r
    squareRoot=sqrt(number);
    if(squareRoot*squareRoot == number){
        printf("%d'un karekoku tam sayidir\n",number);
        printf("%d'un karekoku: %d\n",number,squareRoot);
        }else{
            printf("%d'un karekoku tam sayi degildir",number);
        }
   }



    return 0;
}
