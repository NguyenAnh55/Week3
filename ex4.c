#include <stdio.h>
#define COLMAX 10
#define ROWMAX 10
int main(){
    int i;
    printf(" X |   ");
    for (i=1;i<=COLMAX;i++ )
    {
        printf("%3d   ", i);
    }
    printf("\n-----------------------------------------------------------\n");
    for (i=1;i<=ROWMAX;i++)
    {
        printf("%2d |   ",i);
        int j;
        for (j=1;j<=ROWMAX;j++)
        {
            printf("%3d   ",j*i);

        }
printf("\n");
    }

    return 0;
}