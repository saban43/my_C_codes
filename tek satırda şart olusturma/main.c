#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1,sayi2;
    printf("ilk sayiyi giriniz:");
    scanf("%d",&sayi1);
    printf("ikinci sayiyi giriniz:");
    scanf("%d",&sayi2);

    (sayi1>sayi2)? printf("ilk sayi ikinci sayidan buyuk\n"):printf("ilk sayi ikinci sayidan kucuk\n");


    return 0;
}
