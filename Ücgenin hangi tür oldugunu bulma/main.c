#include <stdio.h>
#include <stdlib.h>

//Kenar uzunluklarý verilen ücgenin türünü bulma
int main()
{
  int a,b,c;
  char longestSide;

  printf("Ucgenin kenarlarini giriniz\n");
  scanf("%d%d%d",&a,&b,&c);
  //En uzun kenarý bulalým
  if(a>b && a>c){
    longestSide='a';
  }else if(b>a && b>c){
    longestSide='b';
  }else{
    longestSide='c';
  }
  // simdi ücgenin türünü belirleyelim

    if(longestSide == 'a'){
        if(a*a == b*b + c*c){
            printf("Dik acili ucgen\n");
        }else if(a*a > b*b + c*c){
            printf("Genis acili ucgen\n");
        }else if(a*a < b*b + c*c){
            printf("Dar acili ucgen\n");
        }else{
            printf("Girilen kenarlar ile ucgen olusturulamaz\n");
        }
    }else if(longestSide == 'b'){
        if(b*b == a*a + c*c){
            printf("Dik acili ucgen\n");
        }else if(b*b > a*a + c*c){
            printf("Genis acili ucgen\n");
        }else if(b*b < a*a + c*c){
            printf("Dar acili ucgen\n");
        }else{
            printf("Girilen kenarlar ile ucgen olusturulamaz\n");
        }
    }else{
        if(c*c == a*a + b*b){
            printf("Dik acili ucgen\n");
        }else if(c*c > a*a + b*b){
            printf("Genis acili ucgen\n");
        }else if(c*c < a*a + b*b){
            printf("Dar acili ucgen\n");
        }else{
            printf("Girilen kenarlar ile ucgen olusturulamaz\n");
        }
    }

    return 0;
}
