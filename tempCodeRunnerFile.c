#include<stdio.h>
int main()
{
    int row,x=1;
    scanf("%d",&row);
    while(x<=row)
    {
        int i=1;
        while(i<=row-x)
        {
            printf(" ");
            i++;
        }
        i=1;
        while(i<=2*x-1)
        {
            printf("A");
            i++;
        }
      printf("\n");
      x++;
    }
    return 0;
}