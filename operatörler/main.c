#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,x,y,z,A,B;


    printf("a b ve c sayi degerlerini tuslayiniz:\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("a ile b degerinin toplami %d\n",a+b);
    printf("a dan c cikartimi %d\n",a-c);
    printf("a nin b ile carpimi ve c ile toplanip tekrar a cikartimi: %d\n",a*b+c-a);
    printf("\n\n");
    printf("x y ve z degerlerini yaziniz:\n");
    scanf("%d %d %d",&x,&y,&z);
    x=++y;
    printf("y degerini 1 arttirdik ve x degerini y degerine esitledik x:%d y:%d\n",x,y);
    x=z++;
    printf("x degerini z ye esitledik ve z yi 1 arttýrdýk x%d z%d\n",x,z);
    z=--x;
    printf("x degerini 1 azalttik ve z degerini x e esitledik x:%d z:%d\n",x,z);
    y=z--;
    printf("y degerini z degerine esitledik ve z degerini 1 azalttýk y:%d z:%d\n",y,z);

    A=a+b+c;
    B=x+y+z;
    printf("a+b+c= A olsun ve x+y+z=B olsun. A ile B degerinin carpimi:%d\n\n",A*B);



    return 0;
}
