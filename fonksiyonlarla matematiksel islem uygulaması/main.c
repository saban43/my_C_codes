#include <stdio.h>
#include <stdlib.h>
#include "myMath.h"

// burada fonksiyonlarýn hatýrlatmalarýný code dosyasýnýn icindeki myMath.h adlý
// dosyanýn icinde sakladýk ve bu sayede kötü görüntü gitmis oldu

int main()
{
    int choose=0,a,b;
    menu();
    printf("\nChoose a number(1-5) :");
    scanf("%d",&choose);
    printf("\n");
    switch(choose)
    {
        case 1: printf("Enter two numbers:");
                scanf("%d,%d",&a,&b);
                printf("Min:%d\n",min(a,b));
                break;

        case 2: printf("Enter two numbers:");
                scanf("%d,%d",&a,&b);
                printf("Max:%d\n",max(a,b));
                break;
        case 3: printf("Enter a numbers:");
                scanf("%d,%d",&a);
                printf("Square:%d\n",square(a));
                break;
        case 4: printf("Enter a numbers:");
                scanf("%d,%d",&a);
                printf("Cube:%d\n",cube(a));
                break;
        case 5: printf("Enter a numbers:");
                scanf("%d,%d",&a);
                printf("Absolute:%d\n",absolute(a));
                break;
        default:printf("\nYou should have chosen a number between 1 and 5 \n");


    }

    return 0;

}

void menu()
{
    printf("\n");
    printf("\t***********\n");
    printf("\t*   MENU  *\n");
    printf("\t***********\n\n");
    printf("1-Minimum\n");
    printf("2-Maximum\n");
    printf("3-Kare al\n");
    printf("4-Kup al\n");
    printf("5-Mutlak deger al\n");
}

int min(int x,int y)
{
    if(x<y){
        return x;
    }
    else{
        return y;
    }
}

int max(int x,int y)
{
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}

int square(int x)
{
    return x*x;
}

int cube(int x)
{
    return x*x*x;
}

int absolute(int x)
{
    if(x<0)
    {
        return x*(-1);
    }
    else{
        return x;
    }
}
