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

    int total_value = row * col;
    int zero = 0;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(arr[i][j] == 0)
            {
                zero++;
            }
        }
    }

    if(total_value == 0)
    {
        printf("This is zero matrix");
    }
    else
    {
        printf("This isn't zero matrix");
    }

    return 0;
}