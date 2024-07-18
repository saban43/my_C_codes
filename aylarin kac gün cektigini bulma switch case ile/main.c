#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aySayisi;

    printf("Kacinci aydasin:");
    scanf("%d",&aySayisi);

    switch(aySayisi){
        case 4:
        case 6:
        case 9:
        case 11:printf("%d. ayda 30 gun ceker",aySayisi);
                break;

        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:printf("%d. ayda 31 gun ceker",aySayisi);
                break;
        case 2:printf("%d. ayda 28 veya 29 gun ceker",aySayisi);
                break;
        default:printf("boyle bir ay yok bilader");
    }

    return 0;
}
