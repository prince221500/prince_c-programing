#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 101

int isSubstring(char* substr, char* str) {
    return strstr(str, substr) != NULL;
}

char* findShortestOriginalTitle(char** titles, int n) {
    char* originalTitle = malloc(MAX_LEN * sizeof(char) );
    originalTitle[0] = '\0';

    for (char c = 'a'; c <= 'z'; ++c) {
        char* candidate = malloc(2 * sizeof(char));
        candidate[0] = c;
        candidate[1] = '\0';

        if (!isSubstring(candidate, originalTitle)) {
            free(originalTitle);
            originalTitle = strdup(candidate);
        }

        free(candidate);
    }

    while (isSubstring(originalTitle, titles[0])) {
        originalTitle[strlen(originalTitle) - 1]++;
    }

    return originalTitle;
}

int main() {
    int n;
    scanf("%d", &n);

    char** titles = malloc(n * sizeof(char*));
    for (int i = 0; i < n; ++i) {
        titles[i] = malloc(MAX_LEN * sizeof(char));
        scanf("%s", titles[i]);
    }

    char* result = findShortestOriginalTitle(titles, n);

    printf("%s\n", result);

    for (int i = 0; i < n; ++i) {
        free(titles[i]);
    }
    free(titles);
    free(result);

    return 0;
}

