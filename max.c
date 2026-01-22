//CH.SC.U4AIE25020
//Name: FINDING MAXIMUM ELEMENT IN AN ARRAY

#include<stdio.h>
void main()
{
    int a[5]={20,40,10,300,5};
    int max=a[0];
    for(int i=1;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("Maximum element in the array is: ");
    printf("%d",max);
}

    