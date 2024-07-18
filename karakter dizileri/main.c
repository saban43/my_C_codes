#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[]="Fehmi";
                                // *sonuclar*
    printf("%s\n",name);        // Fehmi
    printf("%c\n",name[0]);     // F
    printf("%c\n",name[4]);     // i

/*
 char name2[30];

    printf("Enter your name:");
    scanf("%s",&name2);

    printf("\nYour name is %s\n",name2);
*/

    // eger ki birden fazla kelimelik bir yazý girmek istersek scanf() yerine gets() fonksiyonunu kullanabiliriz

    char name3[30];

    printf("Enter your name:");
    gets(name3);

    printf("\nYour name is %s\n",name3);

    return 0;
}
