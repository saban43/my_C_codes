#include <stdio.h>
#include <stdlib.h>


    // girilen 4 sayýnýn aritmetik ortalamasýný bulma
    //average ortalama demek
int main()
{
    float a,b,c,d,average;
    printf("Pozitif 4 sayi giriniz:\n");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    //scanf fonksiyonundan sonra ortalamayý(average) tanýmlayalým

    average=(a+b+c+d)/4;
    printf("aritmetik ortalama:%f\n",average);


    return 0;
}
