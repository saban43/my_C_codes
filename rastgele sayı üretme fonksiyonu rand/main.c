#include <stdio.h>
#include <stdlib.h>
// rand() fonksiyonunu kullanabilmek icin #include <stdlib.h> k�t�phanesini eklememiz laz�m

int main()
{

    int number=0,i;

        for(i=1;i<=5;i++)
        {
            number=rand();
            printf("%d. rastgele sayi %d\n",i,number);
        }
        printf("\n\n\n");
        // egerki 0 dan 9 a kadar rastgele say� �retmek istiyosak rand()%10; yazar�z
        for(i=1;i<=5;i++)
        {
            number=rand()%10;
            printf("sifirdan dokuza kadar %d. rastgele sayi %d\n",i,number);
        }
        printf("\n\n\n");
        // egerki 0 �retmesini istemiyosak rand()%6+1; yazabiliriz bu sayede rastgele say�ya 1 ekleyerek
        // 1 den 6 ya kadar say� �retmesini saglar�z.
        for(i=1;i<=5;i++)
        {
            number=rand()%6+1;
            printf("birden altiya kadar %d. rastgele sayi %d\n",i,number);
        }
        printf("\n\n\n");

        //her seferinde farkl� bir rastgele say� bulmak istiyorsak sran(time(NULL)); yazabiliriz
            srand(time(NULL));
        for(i=1;i<=5;i++)
        {
            number=rand();
            printf("%d. rastgele sayi %d\n",i,number);
        }
        printf("\n\n\n");
        // 1 ile 100 aras�nda her seferinde farkl� say� bulmak icin
            srand(time(NULL));
        for(i=1;i<=5;i++)
        {
            number=rand()%100+1;
            printf("birden yuze kadar her denemede farkl� olan %d. rastgele sayi %d\n",i,number);
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
