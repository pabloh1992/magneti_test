#include <stdio.h>
int main()
{
    int i, j, rows;

    printf("\nVersion B4 ");
    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for(i=1; i<=rows; ++i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("Additional rows: ");
    printf("This is the end: ");
	
    return 0;
}
