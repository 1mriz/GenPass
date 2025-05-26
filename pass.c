/* This is written in C. So it needs to be compiled and run */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define PASSWORD_LENGTH 16
void shuffle(char *array, size_t n) {
    if (n > 1) {
        for (size_t i = 0; i < n - 1; i++) {
            size_t j = i + rand() / (RAND_MAX / (n - i) + 1);
            char t = array[j];
            array[j] = array[i];
            array[i] = t;
        }
    }
}
int main() {
    srand(time(NULL));
    char up[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char low[] = "abcdefghijklmnopqrstuvwxyz";
    char sym[] = "~@#$%^&]*():;{[|?/>";
    char num[] = "0123456789";
    char password[PASSWORD_LENGTH + 1];
    int index = 0;
    for (int i = 0; i < 4; i++) password[index++] = sym[rand() % (sizeof(sym) - 1)];
    for (int i = 0; i < 4; i++) password[index++] = low[rand() % (sizeof(low) - 1)];
    for (int i = 0; i < 4; i++) password[index++] = up[rand() % (sizeof(up) - 1)];
    for (int i = 0; i < 4; i++) password[index++] = num[rand() % (sizeof(num) - 1)];
    shuffle(password, PASSWORD_LENGTH);
    password[PASSWORD_LENGTH] = '\0';
    printf("Generated password: %s\n", password);
    return 0;
}
