#include <stdio.h>
#include <stdlib.h>

int main()
{
   float number1,number2,number3,max,min;
    //int ile de yazılırdı ama float yazmak istedim ben :)
   printf("3 tane sayi giriniz:\n");
   scanf("%f%f%f",&number1,&number2,&number3);
    if(number1>number2 && number1>number3){
        max=number1;
    }else if(number2>number1 && number2>number3){
        max=number2;
    }else{          //else icin bir sart yazmaya gerek yok
        max=number3;
    }
    if(number1<number2 && number1<number3){
        min=number1;
    }else if(number2<number1 && number2<number3){
        min=number2;
    }else{
        min=number3;
    }

    printf("Girdigin en buyuk sayi %.2f\n",max);
    printf("Girdigin en kucuk sayi %.2f\n",min);


    return 0;
}
