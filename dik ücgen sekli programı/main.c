#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,number;

    printf("Enter a number:");
    scanf("%d",&number);


    for(i=1;i<=number;i++){

        for(j=1;j<=i;j++){
            printf("%d ",j);  // %d yerine * koysayd�k * isaretinden �cgen olacakt�
        }//ic for
        printf("\n");  //\n koymazsak yan yana yazar hep

    }//d�s for



    // egerki �cgenimiz coktan aza dogru devam etsin diyosak:


    for(i=1;i<=number;i++){

        for(j=number;j>i;j--){
            printf("%d ",j);
        }//ic for
        printf("\n");

    }//d�s for



    return 0;
}
