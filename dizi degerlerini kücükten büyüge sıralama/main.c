#include <stdio.h>
#include <stdlib.h>

void sortIt();  // siralamayi yapacak fonksiyon
void writeTheArray();  // ekrana yazacak olan fonksiyon
void writeTheArrayReverse(); // ekrana tersten yazacak olan fonksiyon

int numbers[7];
int i;

int main()
{
    printf("Enter array numbers:\n");
    for(i=0;i<7;i++)
    {
        scanf("%d",&numbers[i]);
    }
    printf("\nBefore sorting\n");
    writeTheArray();
    printf("\nThe array is sorting...\n");
    sortIt();
    printf("\nAfter sorting\n");
    writeTheArray();
    printf("\nAfter reverse sorting\n");
    writeTheArrayReverse();

    return 0;
}

void sortIt()
{
    int j,reverse;

    for(i=0;i<7;i++)    // burada kac�nc� diziyi kontrol ettigimize bakiyoruz
    {
        for(j=i+1;j<7;j++)  //burada karsilastirma yapilacak diger dizileri seciyoruz
        {
            if(numbers[j]<numbers[i])  // eger 2. eleman 1.elemandan k�c�kse sunu yap
            {
                reverse=numbers[i];     // ilk �nce 1. eleman� reverse'de sakla
                numbers[i]=numbers[j];  // 2. eleman� 1. elemana ata yani k�c�k olan degeri basa al
                numbers[j]=reverse;     // reverse de sakladigin elemani 2. elemana ata
            }
        }
    }
}

void writeTheArray()
{
    for(i=0;i<7;i++)
    {
        printf("%d ",numbers[i]);
    }
    printf("\n");
}

void writeTheArrayReverse()
{
    for(i=6;i>=0;i--)
    {
        printf("%d ",numbers[i]);
    }
    printf("\n");
}
