#include <stdio.h>
#include <stdlib.h>

int main()
{
   int number;

   printf("Lutfen ekrana bir sayi giriniz:");
   scanf("%d",&number);

    if(number<0){
        printf("Girdiginiz sayi negatif bir sayi\n");
        printf("Girdigin sayi:%d\n",number);
    }else if(number>0){
        if(number>=1000){ //eger if'den sonra tekrar if kosulu açarsak bu sekilde oluyor
            printf("Yavas la gac basamakli sayi yaziyon brooo!\n");
        }
                printf("Girdiginiz sayi pozitif bir sayi\n");
                printf("Girdigin sayi:%d\n",number);
    }else{
        printf("girdigin sayi sifir\n");
    }

    return 0;
}
