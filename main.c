#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hrs=0,min=0,sec=0 ;
    printf("Enter Your Seconds Number :\n");
    scanf("%d",&sec);
    hrs=sec/3600;
    printf("%d hour/s \n",hrs);
    sec=sec%3600;
    min=sec/60;
    printf("%d minute/s \n",min);
    sec=sec%60;
    printf("%d second/s \n",sec);
    return 0;
}
