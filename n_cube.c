//CH.SC.U4AIE25020
//FIND MAX ELEMENT FROM 3D ARRAY

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a=2;    
    int b=2;    
    int c=2;    
    int max=-100000;   
    int arra[a][b][c];  

    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            for(int k=0;k<c;k++)
            {
                scanf("%d",&arra[i][j][k]);
                if(arra[i][j][k]>max)
                {
                    max=arra[i][j][k];
                }
            }
        }}
        printf("maximum element is %d\n",max);

    return 0;
}