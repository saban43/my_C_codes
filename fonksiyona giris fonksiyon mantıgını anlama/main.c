#include <stdio.h>
#include <stdlib.h>

// ilk �nce fonksiyonlar� �st tarafa tan�mlayal�m ki
// program b�yle bir fonksiyonun varl�g�n� bilsin

void nameList(char name[],int age);


// main fonksiyonu bizim ana fonksiyonumuz
int main()
{
    //kullanmak istedigimiz fonksiyonun ad�n� yaz�yoruz.
    nameList("Fehmi",35);
    nameList("Murat",24);
    nameList("Kemal",13);

    return 0;
}

// Fonksiyonumuzu olusturup istedigimiz zaman �ag�rabiliriz
void nameList(char name[],int age)
{
    printf("Hello %s.You are %d years old\n",name,age);
}
