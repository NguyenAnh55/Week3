#include <stdio.h>
int main (){
    float result;
    do {
         printf("Please to type your score: ");
         scanf("%f", &result);
         if (result >= 80){
             printf("Your final result is: HD");
         }else if (result >=70 && result <80){
             printf("Your final result is: DI");
         }else if (result >=60 && result <70){
             printf("Your final result is: CR");
         }else if (result >=50 && result <60){
             printf("Your final result is: PA");
         }else {
             printf("Your final result is: NN");
         }
    } while (result > 100 && result <0);
    return 0;
}
