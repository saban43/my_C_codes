#include <stdio.h>
#include <stdlib.h>


    // girilen 4 say�n�n aritmetik ortalamas�n� bulma
    //average ortalama demek
int main()
{
    float a,b,c,d,average;
    printf("Pozitif 4 sayi giriniz:\n");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    //scanf fonksiyonundan sonra ortalamay�(average) tan�mlayal�m

    average=(a+b+c+d)/4;
    printf("aritmetik ortalama:%f\n",average);


    return 0;
}
