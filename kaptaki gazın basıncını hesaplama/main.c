#include <stdio.h>
#include <stdlib.h>


    //kaptaki gazýn basýncýný hesaplama
    //basýnç formülü: mol sayýsý*R sabiti*sýcaklýk / hacim   PV=nRt
    // pressure basýnç demek volume hacim demek numberOfMole mol sayýsý demek heat sýcaklýk demek
int main()
{
    float pressure,constantR;
    int numberOfMole,volume,heat;
    constantR=0.82;

    printf("kabin hacmini giriniz:");
    scanf("%d",&volume);
    printf("kaptaki molsayisini giriniz:");
    scanf("%d",&numberOfMole);
    printf("ortamdaki sicakligi giriniz:");
    scanf("%d",&heat);

    pressure=(numberOfMole*constantR*heat)/volume;

    printf("%dhacimli kabin basinci %f\n\n",volume,pressure);


    return 0;
}
