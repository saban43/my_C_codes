#include <stdio.h>
#include <stdlib.h>

int main()
{
    char myOperator;
    float number1,number2;

    printf("Choose operator  (+  -  *  /) :");
    scanf("%c",&myOperator);

    printf("Enter two numbers:\n");
    scanf("%f%f",&number1,&number2);

    switch(myOperator){
    case '+':printf("\n%f",number1 + number2);
    break;
    case '-':printf("\n%f",number1 - number2);
    break;
    case '*':printf("\n%f",number1 * number2);
    break;
    case '/':printf("\n%f",number1 / number2);
    break;
    default: printf("\nYou entered wrong operator\n\n");
    break;
    }

    return 0;
}
