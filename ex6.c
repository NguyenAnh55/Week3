#include <stdio.h>
int main(){
    int num;
    do {
        printf("Enter an integer between 1 and 15: ");
        scanf("%d ",&num);
    } while ( num < 1 || num >15 );
    for (int row = 1; row <= num; row++){
        for (int block = 1; block <= num - row; block++)
        {
            printf("   ");
        }
        for (int block = row; block >=1; block--)
        {
            printf(" %d ", block);
        }printf("\n");
    }
} 