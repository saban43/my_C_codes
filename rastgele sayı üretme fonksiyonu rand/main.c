#include <stdio.h>
#include <stdlib.h>
// rand() fonksiyonunu kullanabilmek icin #include <stdlib.h> kütüphanesini eklememiz lazým

int main()
{

    int number=0,i;

        for(i=1;i<=5;i++)
        {
            number=rand();
            printf("%d. rastgele sayi %d\n",i,number);
        }
        printf("\n\n\n");
        // egerki 0 dan 9 a kadar rastgele sayý üretmek istiyosak rand()%10; yazarýz
        for(i=1;i<=5;i++)
        {
            number=rand()%10;
            printf("sifirdan dokuza kadar %d. rastgele sayi %d\n",i,number);
        }
        printf("\n\n\n");
        // egerki 0 üretmesini istemiyosak rand()%6+1; yazabiliriz bu sayede rastgele sayýya 1 ekleyerek
        // 1 den 6 ya kadar sayý üretmesini saglarýz.
        for(i=1;i<=5;i++)
        {
            number=rand()%6+1;
            printf("birden altiya kadar %d. rastgele sayi %d\n",i,number);
        }
        printf("\n\n\n");

        //her seferinde farklý bir rastgele sayý bulmak istiyorsak sran(time(NULL)); yazabiliriz
            srand(time(NULL));
        for(i=1;i<=5;i++)
        {
            number=rand();
            printf("%d. rastgele sayi %d\n",i,number);
        }
        printf("\n\n\n");
        // 1 ile 100 arasýnda her seferinde farklý sayý bulmak icin
            srand(time(NULL));
        for(i=1;i<=5;i++)
        {
            number=rand()%100+1;
            printf("birden yuze kadar her denemede farklý olan %d. rastgele sayi %d\n",i,number);
        }
        printf("\n\n\n");
        //minik bir zar oyunu

        for(i=1;i<=5;i++)
        {
            number=rand()%6+1;
            printf("%d. zariniz %d geldi\n",i,number);
        }
    return 0;
}
