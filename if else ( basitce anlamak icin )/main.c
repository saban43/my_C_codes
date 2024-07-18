#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score;
    printf("Enter a score:");
    scanf("%d",&score);

    if(score>=60){
        printf("Conguratulations! You passed the exam!\n");
        printf("Your score %d",score);
    }else{
        printf("Unfortunately you did not pass the exam mother f*\n");
    }


    return 0;
}
