#include <stdio.h>
#include <string.h>

int checkGrammar(const char *sentence) {
    
    if (strncmp(sentence, "The", 3) == 0 && sentence[strlen(sentence) - 1] == '.') {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char sentence[100];

    printf("Enter a sentence: ");
    gets(sentence);

    if (checkGrammar(sentence)) {
        printf("The sentence satisfies the grammar.\n");
    } else {
        printf("The sentence does not satisfy the grammar.\n");
    }

    return 0;
}