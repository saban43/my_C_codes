#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int notes[]={7,19,24,32,48};  // buradaki[] icine kac eleman olsun istersek onun say�s�n� yazar�z.
                                  // kac eleman oldugu belli degilse [] olarak b�rakabiliriz

    printf("%d\n",notes[0]);  // diziler s�f�r�nc� indeksden baslar
    printf("%d\n",notes[1]);
    printf("%d\n",notes[2]);
    printf("%d\n",notes[3]);
    printf("%d\n\n\n",notes[4]);
//*******************************************************************************

    // dizideki t�m elemanlar� ekrana yazd�rmak icin d�ng�lerden faydalanabiliriz

    for(i=0;i<5;i++)
    {
       printf("%d\n",notes[i]);
    }
    printf("\n\n\n");
//**************************************************************************
    // dizideki degerleri birbiriyle toplayabiliriz

    int sum=0;

    sum= notes[0]+notes[2];
    printf("%d",sum);


    printf("\n\n\n");
//**********************************************************************
    //dizideki ilk eleman� degistirmek icin sunu yapabiliriz
    notes[0]=16;
    printf("%d\n",notes[0]);


    return 0;
}
