#include <stdio.h>
#include <stdlib.h>

// fibonacci dizisi kural�: dizideki bir say� kendinden �nceki 2 sayinin toplam�na esit


int main()
{
    int first,second,third,i,number;
    first=1;
    second=1;
    third=1;


    printf("Enter a number:");
    scanf("%d",&number);


    printf("1 1 ");    //fibonacci dizisinin ilk 2 eleman�n� yaz�yoruz

    for(i=1;i<=number;i++){

        first=second;
        second=third;
        third=first + second;

        if(i<=number-2) //en bastaki 1 ve 1 i dahil etmemek icin numberdan 2 cikartiyoruzzzzz
            printf("%d ",third);   //eger if den sonra 1 sat�r kod yazacaksak s�sl� paranteze gerek yok

    }

    return 0;
}
