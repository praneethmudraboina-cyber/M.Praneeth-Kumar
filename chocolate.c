#include <stdio.h>
void main ()
{
    int big;
    int small;
    int chocolate;
    printf("enter the amount of small bars\n");
    scanf("%d",&small);
printf("enter the amount of big bars\n");
    scanf("%d",&big);
printf("enter the amount of cake weight\n");
    scanf("%d",&chocolate);
    int req=chocolate/5;
    if (req<=big)
{
    int rem=chocolate-(req*5);
    if (rem<=small)
    {
        printf("%d",rem);
    }
    else
    {
        printf("-1");
    }
    }
    else
{
    int rem1=chocolate-(big*5);
    if(rem1<=small)
    {
        printf("%d",rem1);
    }
    else
    {
        printf("-1");
    }
}
}