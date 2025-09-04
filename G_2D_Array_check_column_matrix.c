#include<stdio.h>

int main()
{
    int row, col;
    printf("Enter row and col : ");
    scanf("%d %d", &row, &col);

    int arr[row][col];
    printf("Enter matrix element : ");

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    if(col == 1)
    {
        printf("This is row matrix");
    }
    else
    {
        printf("This isn't row matrix");
    }
}