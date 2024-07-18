#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;

    for(i=1;i<=7;i++){    //dikey sütun sayýsý

        for(j=1;j<=4;j++){     //yatayda yazýlacak yazý
            printf("Hello C");

            if(j != 4){
                printf(" - "); //eger yan yana 4 tane hello c yazdýktan sonra 4. hello c nin saginda - isareti istemiyosak bunu yapabiliriz
            }
        } //ic for bitti

        printf("\n----------------------------------------\n");
    }


    return 0;
}
