#include <stdio.h>
#include <stdlib.h>

int main()
{
    int space,i,rows,j,number;
    // rows sat�r demek , space bo�luk demek , i sat�r say�s�n� temsil ediyor

    printf("Enter the number of rows:");
    scanf("%d",rows);

    for(i=0;i<rows;i++)
    {
       for(space=1;space<=rows-i;space++)
       {
           printf("  ");
       }

       for(j=0;j<=i;j++)
       {
           if(j==0 || i==0)
            number=1;
            else
            number=number*(i-j+1)/j;


           printf("%4d",number);
           //%4d nin amac� d�zg�n bo�luklu bir piramid olu�turmak
       }
       printf("\n");
    }
}
