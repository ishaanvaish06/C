// CH.SC.U4AIE25020
// Name: ARRAY INITIALIZATION 1D
#include <stdio.h>

void main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++) 
    {
        scanf("%d",&a[i]);           
    }
    printf("\nArray elements are:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);        
    }
}