#include<stdio.h>
int main()
{
    int i,j,k,n;
   printf("Enter the number of rows in the pyramid: ");
   scanf("%d",&n);

    for(i=1;i<=n;i++)//for rows
    {
        {printf("\t \t \t \t");}
        for(j=1;j<=n-i;j++)//for colume

    {
        printf(" ");

    }
    for(j=1;j<=i;j++)
    {
        printf("%d",++k);
        printf(" ");
    }
    printf("\n");
    }
    return 0;

}