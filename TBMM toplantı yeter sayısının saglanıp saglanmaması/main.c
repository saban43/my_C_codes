#include <stdio.h>
#include <stdlib.h>

int main()
{
     int partyA,partyB,partyC,currentCouncilor;  //currentCouncilor: mevcut meclis üyesi demek
     const int sumCouncilor=600;                    // current:mevcut   councilor:meclis üyesi

    printf("Meclisdeki partilerin milletvekili sayisini giriniz:\n");
    scanf("%d%d%d",&partyA,&partyB,&partyC);

    currentCouncilor=partyA+partyB+partyC;
    if(currentCouncilor<sumCouncilor/2){
        printf("Gerekli milletvekili olmadigindan toplantiya ara verildi.\n\n");
        printf("Toplanti yeter sayisi %d' dur.\n",sumCouncilor/2);
    }else{
    printf("Meclis toplantiya hazir.\n");
    }


    return 0;
}
