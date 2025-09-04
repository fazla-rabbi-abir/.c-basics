#include<stdio.h>
#include<stdbool.h>

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

    bool diagonal = true;

    if(row == col)
    {
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(i != j)
                {
                    if(arr[i][j] != 0)
                    {
                        diagonal = false;
                        printf("This is not a primary diagonal matrix.\n");
                    }
                }

            }
        }
        if(diagonal == true)
        {
            printf("This is a primary diagonal matrix.\n");
        }
    }
}