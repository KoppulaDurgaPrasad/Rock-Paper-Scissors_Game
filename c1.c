#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int n = rand() % 3;

    printf("Make Your Choice\n");
    printf("Rock: 0\n");
    printf("Paper: 1\n");
    printf("Scissor: 2\n");

    int x;
    scanf("%d", &x);

    if (x < 0 || x > 2) {
        printf("INVALID Choice\n");
        return 0;
    }

    printf("You Selected: ");
    if (x == 0) {
        printf("Rock\n");
    } else if (x == 1) {
        printf("Paper\n");
    } else {
        printf("Scissor\n");
    }

    printf("Computer Selected: ");
    if (n == 0) {
        printf("Rock\n");
    } else if (n == 1) {
        printf("Paper\n");
    } else {
        printf("Scissor\n");
    }

    if (x == n) {
        printf("It's a Draw!\n");
    } else if ((x == 0 && n == 2) || (x == 1 && n == 0) || (x == 2 && n == 1)) {
        printf("You Won!\n");
    } else {
        printf("You Lose!\n");
    }

    return 0;
}