#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentenca[200];
    while (fgets(sentenca, sizeof(sentenca), stdin) != NULL) {
        int n = strlen(sentenca);
        int maiuscula = 1;
        for (int i = 0; i < n; i++) {
            if (!isalpha(sentenca[i])) {
                putchar(sentenca[i]);
            } else {
                if (maiuscula) {
                    putchar(toupper(sentenca[i]));
                } else {
                    putchar(tolower(sentenca[i]));
                }
                maiuscula = 1 - maiuscula;
            }
        }
    }
    return 0;
}
