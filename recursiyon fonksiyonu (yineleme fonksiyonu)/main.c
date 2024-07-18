#include <stdio.h>
#include <stdlib.h>

int sumNumber(int);

int main()
{
     int number;
    printf("Enter a number:");
    scanf("%d",&number);

    int result=sumNumber(number);

    printf("\n%d\n",result);
    return 0;
}


int sumNumber(int i)
{
    if(i>0)
    {
        return i+sumNumber(i-1); // burada fonksiyon kendini yineliyor ve tekrar i-1 olacak sekilde cagýrýyor
    }
    else
    {
    return 0;
    }
}
