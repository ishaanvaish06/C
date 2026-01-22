// CH.SC.U4AIE25020
// Name: ARRAY INITIALIZATION 2D

#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter number of rows and columns: ");
    scanf("%d %d",&n,&m);
    int a[n][m];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
    printf("\nArray elements are:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}