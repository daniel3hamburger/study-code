#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    char tausch[100];

    printf("Type in your Word: ");
    scanf("%s", word);

    int len = strlen(word);

    for (int i = 0; i < len; i++) {
        tausch[i] = word[len - 1 - i];
    }

    tausch[len] = '\0'; 

    printf("First: %s\n", word);
    printf("Second: %s\n", tausch);
    
if (strcmp(word, tausch) == 0) {
    printf("Your word is a Palindrome\n");
} else {
    printf("Your word is not a Palindrome\n");
}
    

    return 0;
}