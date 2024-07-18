#include <stdio.h>
#include <stdlib.h>

int main()
{
    int factorial,i,number;
    factorial=1;

    printf("Enter a number:");
    scanf("%d",&number);

    for(i=1;i<= number ;i++){

        factorial*=i;
    }

        printf("%d! = %d \n",number,factorial);

    return 0;
}

/*
    programýmýzý 1*2*3*4 seklinde degilde 4*3*2*1 seklinde de yazabilirdik


int main()
{
    int factorial,i,number;
    factorial=1;

    printf("Enter a number:");
    scanf("%d",&number);

    for(i=number;i>1 ;i--){

        factorial*=i;
    }

        printf("%d! = %d \n",number,factorial);

    return 0;
}

*/
