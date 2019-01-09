#include <stdio.h>
int main()
{
    int i, j, rows;

    printf("\nVersion B4 ");

    printf("Enter number of rows: ");
    scanf("%d",&rows);
    printf("Version B5 to be merged: ");
    for(i=1; i<=rows; ++i)
    {
            printf("* ");
    }

    printf("Additional rows: ");
    printf("This is the end: ");
	
    return 0;
}
