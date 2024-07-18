#include <stdio.h>
#include <stdlib.h>

int main()
{
    double myValue,myArray[10];
    int choise,index;

    do{
        printf("Make a choise (-1 to Exit) \n");
        printf("\t 1- Write to array\n");
        printf("\t 2- Read from array\n");

        scanf("%d",&choise);

        if(choise == -1) break;
        if(choise != 1 && choise != 2){
            printf("Are you kidding me? ");
            continue;
        }

        printf("Enter array index:");
        scanf("%d",&index);
        if(index < 0 || index > 9){
            printf("index should be in the range of 0-9 \n\n");
            continue;
        }

        switch(choise)
        {
            case 1: printf("\nEnter the value:");
                    scanf("%lf",&myValue);
                    myArray[index]=myValue;     // myArray dizisinin icine myValue degerini ata
                    printf("The write operation is successful\n\n");
                    break;

            case 2: printf("myArray[%d]:%.2f\n\n",index,myArray[index]);
                    break;
        }

    }while(choise!= -1);
    return 0;
}
