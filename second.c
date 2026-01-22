// CH.SC.U4AIE25020
// C program to find the second largest element in an array

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[]={10,15,12,16,16};
    int m1=arr[0];
    int m2=arr[0];
    for(int i=1;i<5;i++)                
    {
        if(arr[i]>m1)
        {
            m1=arr[i];
        }
    }
    for(int i=0;i<5;i++)
    {
        if(arr[i]!=m1 && arr[i]>m2)      
        {
            m2=arr[i];     
        }
        else
        {
            continue;
        }
    }
    printf("The second largest element in the array is: %d\n",m2);
    return 0;
}      


