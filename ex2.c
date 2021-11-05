#include <stdio.h>
int main (){
    int a;
    int sum=0;
    int count=0;
    do {
        printf("Enter a positive integer: ");
        scanf("%d",&a);
        if (a>0){
            sum+=a;
            count++;
        }
    }while (a>0);
    printf("Sum is: %d\n",sum);
    switch (count){
    case 0:
    printf("There are no positive integers");
    break;
    case 1:
    printf("There is 1 positive integers");
    break;
    default:
    printf("There are %d positive integers:",count);
    }

    return 0;
}