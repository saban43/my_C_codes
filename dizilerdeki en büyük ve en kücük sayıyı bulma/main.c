#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,i,big=0,small=100,bigIndex,smallIndex;
    int notes[100],studentNo[100];

    printf("Enter class size:");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        printf("Student No and Note:");
        scanf("%d%d",&studentNo[i],&notes[i]);
    }

    for(i=0;i<size;i++)
    {
        if(notes[i]>big)
        {
            big=notes[i];
            bigIndex=i;
        }

        if(notes[i]<small)
        {
            small=notes[i];
            smallIndex=i;
        }
    }

    printf("\n %d numarali ogrenci en yuksek notu (%d) almistir.",studentNo[bigIndex],big);
    printf("\n %d numarali ogrenci en dusuk notu (%d) almistir.",studentNo[smallIndex],small);

    return 0;
}
