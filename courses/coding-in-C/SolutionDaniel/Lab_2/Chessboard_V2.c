#include <stdio.h>

int main(){  
char arrayBuchstaben[8] = {'A','B','C','D','E','F','G','H'};
 printf("    "); 
 for(int i=1;i<9;i++){ 
    char buchstaben = arrayBuchstaben[i-1]; 
    printf("%c   ",buchstaben);
} 
printf("\n");

printf("  +"); 
for(int j= 1; j<9; j++){
     printf("---+");

} 
printf("\n");
int zaehler = 8;

for  (int a = 0; a < 8; a++) {
     if (zaehler%2){
         printf("%d ",zaehler);
          printf("|   |###|   |###|   |###|   |###|"); 
          printf(" %d \n",zaehler);
         }

if (zaehler%2 == 0) {
    printf("%d ",zaehler);
    printf("|###|   |###|   |###|   |###|   |");
    printf(" %d \n",zaehler);
 }
zaehler= zaehler-1;
 printf("  +"); 
 for(int j= 1; j<9; j++){
     printf("---+");
}
printf("\n"); 
}
 printf("    ");
for(int i=1;i<9;i++){
    char buchstaben = arrayBuchstaben[i-1];
    printf("%c   ",buchstaben);
} 
printf("\n");
return 0;




}
