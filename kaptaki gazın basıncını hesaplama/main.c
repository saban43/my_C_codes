#include <stdio.h>
#include <stdlib.h>


    //kaptaki gaz�n bas�nc�n� hesaplama
    //bas�n� form�l�: mol say�s�*R sabiti*s�cakl�k / hacim   PV=nRt
    // pressure bas�n� demek volume hacim demek numberOfMole mol say�s� demek heat s�cakl�k demek
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
