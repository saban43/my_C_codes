#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float examGrade,sumGrade,average;

    i=1;
    examGrade=0.0;
    sumGrade=0.0;
    average=0.0;
    do{
        printf("%dth exam grade:",i);
        scanf("%f",&examGrade);

        if(examGrade == 0){
            break;
        }

        if(examGrade < 0){
            printf("please enter a pozitive number\n");
            continue;
        }
        else{
            sumGrade += examGrade;
        }
        i++;
    }while(examGrade != 0);

    average = sumGrade / (i-1);  //i-1 yazmam�z�n sebebi en son 0 notunu yazd�g�m�z icin onu hesaba katm�yoruz
    printf("\nYou entered %d exam grades\n",i-1);
    printf("average:%f\n",average );


    return 0;
}
