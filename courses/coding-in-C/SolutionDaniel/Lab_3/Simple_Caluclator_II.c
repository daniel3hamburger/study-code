#include <stdio.h>

int main() {

float num1;
float num2;
char operator=0;
float sum=0;

    printf("First Number: ");
    if (scanf("%f", &num1) != 1){
    printf("Input error\n");
    }

    printf("Second Number: "); 
      if (scanf("%f", &num2) != 1){
    printf("Input error\n");
    }

    printf("Operator (+,-,*,/): ");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        sum=num1+num2; 
       printf("%.2f",sum);
        break;
    case '-':
        sum=num1-num2; 
       printf("%.2f",sum);
        break;
    case '/':
       if (num2>0){
            sum=num1/num2; 
            printf("%.2f",sum);
        }
        else{
            printf("Divsion by Zero");
        }   
        break;
    case '*':
        sum=num1*num2; 
       printf("%.2f",sum);
        break;
    
    default:
    printf("Error");
        break;
    }
    

    return 0;
}