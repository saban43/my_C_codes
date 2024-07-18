#include <stdio.h>
#include <stdlib.h>

// ilk önce fonksiyonlarý üst tarafa tanýmlayalým ki
// program böyle bir fonksiyonun varlýgýný bilsin

void nameList(char name[],int age);


// main fonksiyonu bizim ana fonksiyonumuz
int main()
{
    //kullanmak istedigimiz fonksiyonun adýný yazýyoruz.
    nameList("Fehmi",35);
    nameList("Murat",24);
    nameList("Kemal",13);

    return 0;
}

// Fonksiyonumuzu olusturup istedigimiz zaman çagýrabiliriz
void nameList(char name[],int age)
{
    printf("Hello %s.You are %d years old\n",name,age);
}
