#include <stdio.h>

int main() {
    FILE *f;

    f = fopen("test.txt", "w");
    fputc('A', f);
    fclose(f);

    f = fopen("test.txt", "a");
    fputs(" Hallo", f);
    fclose(f);

    f = fopen("test.txt", "a");
    fprintf(f, "%d", 123);
    fclose(f);

    f = fopen("test.txt", "r");
    char c = fgetc(f);
    printf("%c\n", c);
    fclose(f);

    f = fopen("test.txt", "r");
    char s[50];
    fgets(s, 50, f);
    printf("%s\n", s);
    fclose(f);

    f = fopen("test.txt", "r");
    char wort[20];
    int zahl;
    fscanf(f, "%s%d", wort, &zahl);
    printf("%s %d\n", wort, zahl);

    return 0;
}