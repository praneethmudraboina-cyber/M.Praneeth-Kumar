#include <stdio.h>
void main ()
{
    int small;
    int big;
    int goal;
    printf("enter the bricks with small and big\n");
    scanf("%d %d",&big,&small);
    int required=goal/5;
    if (required<=big)
    {
        int rem=goal-(required*5);
        if(rem<=small)
        {
            printf("true");
        }
        else
        {
            printf("flase");
        }
    }
        else
        {
            int rem=goal-(big*5);
        if (rem<=small)
        {
            printf("true");
        }
        else
        {
        printf("flase");
        }
    }
}