#include <stdio.h>
#include <string.h>

int main(){
char content[100] ="Curly bird catches the worm";
char* Var1 = &content[0];
char* Var2 = &content[1];

printf("First: %s \n", content);
printf("Second: %c \n", *Var1);

*Var1='E';
*Var2='a';

printf("After: %s \n", content);



    return 0;
}