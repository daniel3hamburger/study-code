#include <stdio.h>
int main(){
 
    char arrayBuchstaben[8] = {'A','B','C','D','E','F','G','H'};
      int x= 9;

for(int j=0; j<8; j++){
    x=x-1;

    for (int i =1; i<9 ; i++ ){
     char buchstaben = arrayBuchstaben[i-1];
     printf("%c",buchstaben);
     printf("%d  ",x);

    }
    printf("\n");
}
    return 0;
    
}