//CH.SC.U4AIE25020
//To get an 2D-dimensional array from user for 5 students with 3 subject for each of them and print the topper and his avg marks.
#include <stdio.h>
int main()
{
    int max_student;
    int max_total=0;
    int mark[5][3];
    for(int i=0;i<5;i++)
    {
        int total=0;
        printf("Enter marks of student %d:\n",i);
        for(int j=0;j<3;j++)
        {
            printf("sub : %d : ",j);
            scanf("%d",&mark[i][j]);
            total=total+mark[i][j];
        }
        if(total>max_total)
        {
            max_total=total;
            max_student=i;
        }

    }
    printf("TOPPER STUDENT HAS TOTAL MARKS: %d\n",max_total);
    printf("average marks of topper student is: %d\n",max_total/3);
    return 0;
    }
