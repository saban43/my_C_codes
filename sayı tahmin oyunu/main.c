#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main()
{
    int randomNumber,guessNumber,guessCount,score=100;

    
    

    printf("1-100 arasinda rastgele bir sayi tuttum\n");
    printf("Tahmin et!\n");

    while(guessNumber!=-1)
    {
        printf("Tahmin sayini gir:");
        scanf("%d",&guessNumber);

        if(guessNumber==-1) break;  //-1 yazarak d�ng�den c�kabilmemiz icin

        if(guessNumber < 1 || guessNumber > 100)
        {
            printf("1 ile 100 arasi demistim sana!");
            continue;
        }
        guessCount++;

        if(guessNumber == randomNumber)
        {
            printf("Tebrikler! %d. seferde bildin.\n",guessCount);
            break;
        }

        else
        {
            if(guessNumber>randomNumber)
            {
                printf("Daha kucuk bir sayi girmelisin\n");
            }
            else
            {
                printf("Daha buyuk bir sayi girmelisin\n");
            }//yaklasma durum kosulu
            score-=10;
        }//bilemedigi zaman cal�sacak else
    }//while end
    printf("\nPuanin 100 uzerinden %d\n",score < 0 ? 0 : score);
    return 0;
}

