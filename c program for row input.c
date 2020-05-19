#include<stdio.h>

int main()
{
    int rowInput, i, j;
    printf("enter the row number:");
    scanf("%d", &rowInput);
    for(i=1; i<=rowInput; i++)
    {
        for(j=1; j<= i*2-1; j++)
        {
            printf("%d",j);

        }
    printf("\n");
    }
    return 0;
}
