//CH.SC.U4AIE25020
//COUNT FREQUENCY OF GIVEN ELEMENT IN AN ARRAY

#include <stdio.h>
int main()
{
    int n, count = 0, element;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to count its frequency: ");
    scanf("%d", &element);
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == element)
        {
            count++;
        }
    }
    printf("Frequency of %d is: %d\n", element, count);
    return 0;
}