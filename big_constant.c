//CH.SC.U4AIE25020
//SWAPPING O(1)

#include <stdio.h>
int main()
{
    int a,b;
    printf("enter first integer\n");
    scanf("%d",&a);
    printf("enter second integer\n");
    scanf("%d",&b);
    int c=a;
    a=b;
    b=c;
    printf("after swapping first integer is %d\n",a);
    printf("after swapping second integer is %d\n",b);
    
    return 0;
}