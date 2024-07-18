#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,number;

    printf("Enter a number:");
    scanf("%d",&number);


    for(i=1;i<=number;i++){

        for(j=1;j<=i;j++){
            printf("%d ",j);  // %d yerine * koysaydýk * isaretinden ücgen olacaktý
        }//ic for
        printf("\n");  //\n koymazsak yan yana yazar hep

    }//dýs for



    // egerki ücgenimiz coktan aza dogru devam etsin diyosak:


    for(i=1;i<=number;i++){

        for(j=number;j>i;j--){
            printf("%d ",j);
        }//ic for
        printf("\n");

    }//dýs for



    return 0;
}
