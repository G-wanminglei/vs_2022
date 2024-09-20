#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    fflush(stdin);
    char c = 'x';
    scanf("%c", &c);
    printf("a = %d, b = %d, c = %c\n", a, b, c);
    while (scanf("%c", &c) != EOF) {
        printf("%c", c);
    }
    printf("\n");
    return 0;
}