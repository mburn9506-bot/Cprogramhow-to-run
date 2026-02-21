#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORDS 100000
#define MAX_LENGTH 100

char words[MAX_WORDS][MAX_LENGTH];
int word_count = 0;

// Convert string to lowercase
void to_lowercase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

// Load dictionary file
int load(const char *dictionary) {
    FILE *file = fopen(dictionary, "r");
    if (file == NULL) {
        return 0;
    }

    while (fgets(words[word_count], MAX_LENGTH, file)) {
        words[word_count][strcspn(words[word_count], "\n")] = '\0';
        to_lowercase(words[word_count]);
        word_count++;
    }

    fclose(file);
    return 1;
}

// Check if word exists
int check(const char *word) {
    char temp[MAX_LENGTH];
    strcpy(temp, word);
    to_lowercase(temp);

    for (int i = 0; i < word_count; i++) {
        if (strcmp(words[i], temp) == 0) {
            return 1;  // found
        }
    }
    return 0;  // not found
}

// Return number of words
int size() {
    return word_count;
}

// Unload dictionary (nothing to free here)
int unload() {
    return 1;
}

int main() {
    load("dictionary.txt");

    printf("Size: %d\n", size());
    printf("Check apple: %d\n", check("apple"));
    printf("Check car: %d\n", check("car"));
    printf("Check cat: %d\n", check("cat"));

    unload();
    return 0;
}