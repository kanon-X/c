#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
char text[10000];
int i, charCount = 0, wordCount = 0;
int Word = 0;
// Read the text
printf("Enter the input string:\n");
fgets(text, sizeof(text), stdin);
// Scan and count
for (i = 0; text[i] != '\0'; i++) {
if (text[i] != '\n') {
charCount++;
}
if (isspace(text[i])) {
Word = 0;
} else if (!Word) {
Word = 1;
wordCount++;
}
}
// Display results
printf("No. of characters: %d\n", charCount);
printf("No. of words: %d\n", wordCount);
return 0;
}
