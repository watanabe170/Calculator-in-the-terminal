#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add(int a, int b) {
    return a + b;
}

int minus(int a, int b) {
    return a - b;
}

int mult(int a, int b) {
    return a * b;
}

float dev(int a, int b) {
    return (float)a / b;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: calc <choice> <number> <number>\n");
        return 1;
    }

    if (strcmp(argv[1], "--help") == 0) {
        printf("Please read README.md for more help\n");
        return 0;
    }

    if (argc < 4) {
        printf("Usage: calc <choice> <number> <number>\n");
        return 1;
    }

    int choice = atoi(argv[1]);
    int a = atoi(argv[2]);
    int b = atoi(argv[3]);

    if (choice == 1) {
        printf("%d\n", add(a, b));
        return 0;
    }
    else if (choice == 2) {
        printf("%d\n", minus(a, b));
        return 0;
    }
    else if (choice == 3) {
        printf("%d\n", mult(a, b));
        return 0;
    }
    else if (choice == 4) {
        if (b == 0) {
            printf("Cant divide by zero!\n");
            return 1;
        }

        printf("%f\n", dev(a, b));
        return 0;
    }
    else {
        printf("Please enter in a choice of 1/2/3/4!\n");
        return 1;
    }
}