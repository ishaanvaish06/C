//CH.SC.U4AIE25020
//program that reads 5x5 array of integer and then row sum and column sum

#include <stdio.h>
int main()
{
    int arr[5][5];
    int rowSum[5];
    int colSum[5];
    for(int i = 0; i < 5; i++)
    {
        printf("Enter row %d : ", i + 1);
        for(int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
            rowSum[i] += arr[i][j];
            colSum[j] += arr[i][j];
        }
    }
    printf("Row Total :");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", rowSum[i]);
    }
    printf("\n");
    printf("Column Total :");
    for(int j = 0; j < 5; j++)
    {
        printf("%d ", colSum[j]);
    }
    printf("\n");

    return 0;
}           