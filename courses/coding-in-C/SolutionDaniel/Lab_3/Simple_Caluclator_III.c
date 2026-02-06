#include <stdio.h>

float operationPlus(float nummer1,float nummer2){
    float sum=0;
    sum= nummer1+nummer2;
    return sum;

}
float operationMiuns(float nummer1,float nummer2){
    float sum=0;
    sum= nummer1-nummer2;
    return sum;

}
float operationMultiplcation(float nummer1,float nummer2){
    float sum=0;
    sum= nummer1*nummer2;
    return sum;

}
float operationDivison(float nummer1,float nummer2){
    float sum=0;
    sum= nummer1/nummer2;
    return sum;

}

int main() {

float num1;
float num2;
char operator=0;
float summe=0;

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
        summe = operationPlus(num1,num2);

        break;
    case '-':
        summe = operationMiuns(num1,num2);
        break;
    case '/':
    if (num2>0){
          summe = operationDivison(num1,num2);
        }
        else{
            printf("Divsion by Zero \n");
        }   
        break;
    case '*':
        summe = operationMultiplcation(num1,num2);
        break;
    
    default:
    printf("Error");
        break;
    }

    printf("Egebnis: %.2f",summe);
}