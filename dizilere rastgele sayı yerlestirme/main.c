#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,dice,howMany[7]={0,0,0,0,0,0,0};  // program sacmalamas�n diye ilk basta t�m indexleri s�f�ra esitledik

    srand(time(NULL));

    for(i=1;i<=100;i++)     //i<=100 demek 100 defa zar� atacag�z demek
    {
        dice=rand()%6+1;    // 1-6 arasi rastgele sayi

        howMany[dice]++;    // burada zarin geldigi degerdeki indexi 1 arttir demek

    }

    printf("Zar Numarasi \t Kac Defa Geldi\n");
    for(i=1;i<7;i++)
    {
        printf("%d\t\t %d\n",i,howMany[i]);   // programdaki amac zar� 100 defa at�p hangi say�dan kac defa geldigini bulmak
    }
    return 0;
}
