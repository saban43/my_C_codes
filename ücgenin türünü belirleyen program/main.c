#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angle1,angle2,angle3;

    printf("Enter three angels:\n");
    scanf("%d%d%d",&angle1,&angle2,&angle3);

    if(angle1 + angle2 + angle3 != 180) //3 acinin toplam� 180 e esit degilse demek (!=)
    {
      printf("These angels do not form triangels!\n");
    }
    else
        {
        if(angle1 == 60 && angle2 == 60 && angle3 == 60)
            {
            printf("this is an equilateral triangle");  //eskenar �cgen
        }else if(angle1 == angle2 || angle1 == angle3  || angle2 == angle3)
            {
            printf("This is an isosceles triangle\n");  //ikizkenar �cgen
        }else
        {
            printf("This is a scalene triangle\n");     //cesitkenar �cgen
        }
    }

    return 0;
}
