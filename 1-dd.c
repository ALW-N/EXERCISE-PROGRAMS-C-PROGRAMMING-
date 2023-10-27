#include <stdio.h>
#include <stdbool.h>

void readString(char *str) {
printf("Enter a string: ");
scanf(" %s", str); .
int stringLength(char *str) {
}

int length = 0;
while (str[length] != '\0') {
length++;
}
return length;
}

void reverseString(char *str) {
	int i,j;
int length = stringLength(str);
for ( i = 0, j = length - 1; i < j; i++, j--) {
char temp = str[i];
str[i] = str[j];
str[j] = temp;
}
}

void copyString(char *src, char *dest) {
int i = 0;
while (src[i] != '\0') {
dest[i] = src[i];
i++;
}
dest[i] = '\0';
}

int countCharOccurrences(char *str, char targetChar) {
int count = 0;
int i;
for ( i = 0; str[i] != '\0'; i++) {
if (str[i] == targetChar) {
count++;
}
}
return count;
}
int main() {
char inputString[100]; 
readString(inputString);
printf("Entered String: %s\n", inputString);
int length = stringLength(inputString);
printf("String Length: %d\n", length);
reverseString(inputString);
printf("Reversed String: %s\n", inputString);
char copiedString[100]; 
copyString(inputString, copiedString);
printf("Copied String: %s\n", copiedString);
char targetChar;
printf("Enter a character to check its presence: ");
scanf(" %c", &targetChar); .
int charCount = countCharOccurrences(inputString, targetChar);
if (charCount > 0) {
printf("%c is present in the string, and it appears %d times.\n", targetChar, charCount);
} else {
printf("%c is not present in the string.\n", targetChar);
}
return 0;
}
