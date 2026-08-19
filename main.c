#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]) {
    int choice = atoi(argv[1]);
    
    int a = atoi(argv[2]);
    int b = atoi(argv[3]);

    if (choice == 1) {
        printf("%d\n", a + b);
    }
    else if (choice == 2) {
        printf("%d\n", a - b);
    }
    else if (choice == 3) {
        printf("%d\n", a*b);
    }
    else if(choice == 4) {
        if (b == 0) {
            printf("Cant divide by zero");
            return 1;
        }
        else {
            printf("%f\n", (float)a / b);
        }
    }
    else {
        printf("Please try typing sum --help!");
        return 1;
    }


    return 0;
}