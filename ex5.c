#include <stdio.h>
int main(){
    int a,i,j;
   // Typing number until between 1 and 15//
   do {
       printf("Enter the number of lines: ");
       scanf("%d",&a);
   }while (a > 15 || a < 1);
   // print the Pyramid with number //
   for ( i=a+1;i>0;i--)
   {
       for ( j=1;j<i;j++)
       {
           printf("%d ",i-j);
       }
       printf("\n");
   }
}