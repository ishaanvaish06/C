//CH.SC.U4AIE25020
//MATRIX PRINTING 2-D ARRAY   O(N^2)

#include <stdio.h>
int main() 
{
    int n; 
    printf("enter size of matrix\n");
    scanf("%d",&n);
    int matrix[n][n]; 
    printf("enter elements of matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("matrix is\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}