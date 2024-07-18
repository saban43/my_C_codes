#include <stdio.h>
#include <stdlib.h>

float expoentiation(float ,int);
//expoentiation üs alma demek

int main()
{
    float base=0,result=0;  // base taban demek result cevap demek
    int exponent=0;  // exponent üs demek

    printf("Enter base and exponent values:\n");
    scanf("%f%d",&base,&exponent);

    result=expoentiation(base ,exponent);
    printf("Result : %f\n",result);

    return 0;
}

float expoentiation(float x, int y)
{
    float result=1;
    int i;
    if(y<0)
    {
        for(i=0;i<-y;i++)
        {
            result*=x;
        }
    }
    else
    {
        for(i=0;i<y;i++)
        {
            result*=x;
        }
    }
    return result;
}



