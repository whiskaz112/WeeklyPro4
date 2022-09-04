#include<stdio.h>

int main()
{
    int row,space;
    scanf("%d",&row);
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=row-i;j++)
        {
            printf(" ");
        }
        for(int z=1;z<=2*i-1;z++)
        {
            printf("A");
        }
        printf("\n");
    }
    return 0;
}