#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,i,j,control;

    // i ekrana yazmak istedigimiz asal say�lar
    // j asal say� olup olmad�g�n� kontrol ederken kulland�g�m�z say�lar yani b�l�m yapt�g�m�z say�lar
    // control ekrana say�y� yaz�p yazmayacag�m�z� kontrol ederken kullan�yoruz



    printf("Hangi sayiya kadar olan asal sayilari ekranda istersin:");
    scanf("%d",&number);

    for(i=2;i<=number;i++){
        control=1;
            for(j=2;j<=i/2;j++){
                if(i%j==0){ //burada kalan 0 ise control degerini s�f�r yap ve icdeki for
                            //d�ng�s�n� bitir diyor.Yani sayinin asal olup olmad�g�n� burada belirliyoruz
                    control=0;
                    break;
                }
            }//ic for bitti
            if(control!=0){ //eger control degeri 0 a esit degilse ekrana o sayiyi yazd�r,control 0'a esitse ekrana yazd�rma
                printf("%d ",i);
            }

    }//d�s for bitti

    return 0;
}
