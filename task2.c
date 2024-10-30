#include <stdio.h>
#include <string.h>

void analyzeFrequency(const char *slogan) {
    int freq[256] = {0};  // Array to store character frequencies (256 for all ASCII characters)

    // Count frequency of each character in the slogan
    for (int i = 0; slogan[i] != '\0'; i++) {
        freq[(unsigned char)slogan[i]]++;
    }

    // Print the result in a dictionary-style format
    printf("For \"%s\": {", slogan);
    int first = 1;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            if (!first) {
                printf(", ");
            }
            printf("'%c': %d", i, freq[i]);
            first = 0;
        }
    }
    printf("}\n");
}

int main() {
    const char *slogans[] = {"buy now", "save big", "limited offer"};
    int sloganCount = sizeof(slogans) / sizeof(slogans[0]);

    // Process each slogan
    for (int i = 0; i < sloganCount; i++) {
        analyzeFrequency(slogans[i]);
    }

    return 0;
}
