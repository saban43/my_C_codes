#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i,j,number;

    printf("Enter a number value:");
    scanf("%d",&number);

    for(i=1;i<=number;i++){

        for(j=1;j<=number-i;j++){
            printf(" ");
        }

        for(j=1;j<=i;j++){      // for(j=1;j<=i*2-1;j++)  yazarsak tek say�lar halinde �cgen yapar
            printf("* ");       // yani 1 3 5 7 9 gibi
        }
        printf("\n");
    }

    return 0;
}
