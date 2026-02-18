#include <stdio.h>
#include<string.h>

int main (int argc, char **argv){
if (argc < 2) {
    printf("Error");
    return 1;   // Programm mit Fehlercode beenden
}

for (int i = 0; i < argc; i++){
   printf("Argument %d at address \"%p\" has content: %s (length: %d)\n", i, (void*)argv[i], argv[i], strlen(argv[i]));

}


}