#include <stdio.h>
#include <stdlib.h>

int main()
{
   float number1,number2,number3,number4;

   number1=0.0;
   number2=0.0;
   number3=0.0;
   number4=0.0;
// buradaki degerler baslang�c degeri olsun.Bu degerleri scanf fonksiyonu ile ekrana say�
// yaz�p tan�m yaparak degistirecegiz

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

   // %.4f  yazmam�z�n sebebi noktadan sonraki 4 say�y� yazd�rmak istememiz ama bunu yazma kodun d�zenini mafettim ben :D
   //\t 1 sekme bo�luk b�rakmak demek
   //scanf fonksiyonunu yazd�ktan sonra karenin ve k�b�n tan�m�n� yap

    return 0;
}
