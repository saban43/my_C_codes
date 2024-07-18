#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day; // buradaki sayıya göre dogru case seciyor

    printf("Haftanin kacinci gunundesin ?\n");
    scanf("%d",&day);


    switch(day){
        case 1:printf("Monday\n");
        break;  //islemi bitir demek
        case 2:printf("Tuesday\n");
        break;
        case 3:printf("Wednesday\n");
        break;
        case 4:printf("Thursday\n");
        break;
        case 5:printf("Friday\n");
        break;
        case 6:printf("Saturday\n");
        break;
        case 7:printf("Sunday\n");
        break;

        default:printf("there is no such a day \n"); // eger yukardaki case lerden birine girmezse bu calisacak
        break;
    }

    return 0;
}
