#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ilksayi;
    int ikincisayi;
    int operrator;
    int sonuc;
    printf("ilk sayiyi yazin : ");
    scanf("%d",&ilksayi);
    printf("\nkullanýlacak operatoru secin(secenekleriniz: toplama, eksiltme, carpma, bolme) : ");
    scanf("%d",&operrator);
    printf("\n ikinci sayiyi yazin : ");
    scanf("%d",&ikincisayi);
    if (operrator == 1){
        sonuc = ilksayi + ikincisayi;
    }else if(operrator == 2){
        sonuc = ilksayi - ikincisayi;
    }else if(operrator == 3){
        sonuc = ilksayi * ikincisayi;
    }else if(operrator == 4){
        sonuc = ilksayi / ikincisayi;
    }else{
        printf(operrator);
        sonuc = NULL;
    }
    if (sonuc == NULL){
        printf("yanlis operator girdiniz galiba...");
    }else{
    printf("sonucunuz : %d",sonuc);
    }

    return 0;
}
