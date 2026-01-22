//CH.SC.U4AIE25020
//NUMBER BETWEEN 0 TO N-1      O(n)

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n; //SPACE O(1)
    printf("enter integer");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}