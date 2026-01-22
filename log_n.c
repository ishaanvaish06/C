//CH.SC.U4AIE25020
//LOGARITHMIC TIME COMPLEXITY O(log n)  -  BINARY SEARCH
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10]={12,13,14,16,18,20,23,25,30,35};    
    int target;   
    scanf("%d",&target);
    int l=0;    
    int r=9;   
    while(l<r)
    {
        int mid = l+(r-l)/2;
        if(arr[mid]==target)
        {
            printf("target found at index %d",mid);
            return 0;
        }
        else
        {
            if(arr[mid]>target)
            {
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
    }
    return 0;
}