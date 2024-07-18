#include <stdio.h>
#include <stdlib.h>

int main()
{
   float number1,number2,number3,number4;

   number1=0.0;
   number2=0.0;
   number3=0.0;
   number4=0.0;
// buradaki degerler baslangıc degeri olsun.Bu degerleri scanf fonksiyonu ile ekrana sayı
// yazıp tanım yaparak degistirecegiz

   printf("lutfen sayilarinizi giriniz:\n");
   scanf("%f %f %f %f",&number1,&number2,&number3,&number4);
   printf("number\t\t\t");
   printf("sayinin karesi\t\t");
   printf("sayinin kubu\t\t\n");

   printf("------\t\t\t");
   printf("--------\t\t");
   printf("--------\t\t\n");

   printf("%.4f\t\t\t",number1);
   printf("%.4f\t\t\t",number1*number1);
   printf("%.4f\t\t\n",number1*number1*number1);

   printf("%.4f\t\t\t",number2);
   printf("%.4f\t\t\t",number2*number2);
   printf("%.4f\t\t\n",number2*number2*number2);

   printf("%.4f\t\t\t",number3);
   printf("%.4f\t\t\t",number3*number3);
   printf("%.4f\t\t\n",number3*number3*number3);

   printf("%.4f\t\t\t",number4);
   printf("%.4f\t\t\t",number4*number4);
   printf("%.4f\t\t\n",number4*number4*number4);

   // %.4f  yazmamızın sebebi noktadan sonraki 4 sayıyı yazdırmak istememiz ama bunu yazma kodun düzenini mafettim ben :D
   //\t 1 sekme boşluk bırakmak demek
   //scanf fonksiyonunu yazdıktan sonra karenin ve kübün tanımını yap

    return 0;
}
