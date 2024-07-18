#include <stdio.h>
#include <stdlib.h>

int main()
{
    double average=0 ,numbers[3];     //average ortalama demek

    printf("Enter three numbers:");
    scanf("%lf%lf%lf",&numbers[0],&numbers[1],&numbers[2]);

    average= (numbers[0]+numbers[1]+numbers[2])/3;
    printf("Average %.3f\n",average);
    return 0;
}
