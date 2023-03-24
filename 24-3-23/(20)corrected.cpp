#include <stdio.h>

void main()
{
    int a[20][20], c[20][20], i, j, r1, c1;
    clrscr();
    printf("\n Enter the number of rows and column of a matrix: \n");
    scanf("%d%d", &r1, &c1);
    printf("Enter the elements of matrix :");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
            scanf("%d",&a[i][j]);
    }
    printf("The elements of matrix are :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
            printf("\t%d",a[i][j]);
        printf("\n");
    }
    printf("\n Transpose Matrix is\n");
    for(i=0;i<r1;i++)
    {
        printf("\n");
        for(j=0;j<c1;j++)
        {
            c[i][j]=a[j][i]; /* inverse rows and column */
            printf("%d\t",c[i][j]);
        }
    }
    getch();
}

