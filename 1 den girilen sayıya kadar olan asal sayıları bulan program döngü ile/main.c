#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,i,j,control;

    // i ekrana yazmak istedigimiz asal sayýlar
    // j asal sayý olup olmadýgýný kontrol ederken kullandýgýmýz sayýlar yani bölüm yaptýgýmýz sayýlar
    // control ekrana sayýyý yazýp yazmayacagýmýzý kontrol ederken kullanýyoruz



    printf("Hangi sayiya kadar olan asal sayilari ekranda istersin:");
    scanf("%d",&number);

    for(i=2;i<=number;i++){
        control=1;
            for(j=2;j<=i/2;j++){
                if(i%j==0){ //burada kalan 0 ise control degerini sýfýr yap ve icdeki for
                            //döngüsünü bitir diyor.Yani sayinin asal olup olmadýgýný burada belirliyoruz
                    control=0;
                    break;
                }
            }//ic for bitti
            if(control!=0){ //eger control degeri 0 a esit degilse ekrana o sayiyi yazdýr,control 0'a esitse ekrana yazdýrma
                printf("%d ",i);
            }

    }//dýs for bitti

    return 0;
}
