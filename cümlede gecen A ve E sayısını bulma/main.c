#include <stdio.h>
#include <stdlib.h>

/*
Nokta ile biten cumleyi karakter array'ine okutalim
Sonra cumlede kac tane A veya E karakteri oldugunu hesaplayalým
*/
void countCharacters(char x[]);

int main()
{
  char x[1000];
  int i=0;

  printf("Enter a sentence:");

  do{
    scanf("%c",&x[i]);
    i++;

  }while(x[i-1] != '.'); //x[i-1] yazmamizin sebebi . koyduktan sonra enter tusuna basinca donguyu bitirmesi icin
                         //  while(x[i-1] != '.') demek nokta karakteri gelene kadar donguyu devam ettir demek
    countCharacters(x);
    return 0;
}


void countCharacters(char x[])
{
    int i,aCount=0,eCount=0;

    for(i=0;x[i] != '.';i++)
    {
        if(x[i] == 'A' || x[i] == 'a')
            aCount++;
        if(x[i] == 'E' || x[i] == 'e')
            eCount++;
    }
    printf("A/a:%d\n",aCount);
    printf("E/e:%d\n",eCount);

}

