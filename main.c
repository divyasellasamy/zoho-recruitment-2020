#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp,row,col,i,j;
    printf("Enter the input:");
    scanf("%d",&inp);
    for(row=1;row<=inp+1;printf("\n"),row++)
    {
        for(col=inp+1;col>row;col--)
        {
            printf("  ");

        }
        for(i=row-1;i>=0;i--)
        {
            printf(" %d",i);

        }
        for(j=1;j<row;j++)
            printf(" %d",j);

    }

    return 0;
}
