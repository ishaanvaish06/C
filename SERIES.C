//CH.SC.U4AIE25020
//C Program to calculate the sum of first n terms of the series: x+3x+5x+....n(Hint:x(1+3+5+...n odd number)).
#include<stdio.h>
int main()
{
    int n, x, sum = 0;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the number of terms n: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++)
    {
        sum += (2 * i - 1) * x;
    }
    printf("Sum of the series: %d\n", sum);
    return 0;
}