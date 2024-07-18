#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,unit;  // unit dizinin kac elemaný olacagýný belirleyecek olan deger
    int numbers[100];  // burada [] icine mecbur bir sayi yazmamiz lazim büyük bir sayi yazabiliriz

    printf("Enter a positive number:");
    scanf("%d",&unit);

    printf("Enter array numbers:\n");
    for(i=0;i<unit;i++)
    {
        scanf("%d",&numbers[i]);
    }
    printf("Odd Numbers:");
    for(i=0;i<unit;i++)
    {
    if(numbers[i]%2 == 1)
        printf("%d ",numbers[i]);
    }

    printf("\nEven Numbers:");
    for(i=0;i<unit;i++)
    {
    if(numbers[i]%2 == 0)
        printf("%d ",numbers[i]);
    }
    printf("\n");

    return 0;
}
