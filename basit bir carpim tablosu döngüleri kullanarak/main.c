#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,number;
    number=0;
    i=1;

    printf("1 den 10 a kadar bir sayi giriniz:");
    scanf("%d",&number);

    // burada 1 den 10 a kadar bir say� girmezse ekrana bidaha yapma yazacag�z
    if(number <1 || number >10){
        printf("Lutfen bidaha bunu yapma!\n");
        return 0;
    }

    // simdi program�m�z� yazmaya baslayal�m
    while(i<=10){
        printf("%d x %d = %d \n",number,i,number*i);
        i++;
    }

    return 0;
}
