
#include <stdio.h>

void odd(int n);

void even(int n) {
    if (n == 0) {
        printf("Even");
        return;
    }
    odd(n - 1);
}

void odd(int n) {
    if (n == 0) {
        printf("Odd");
        return;
    }
    even(n - 1);
}

int main() {
    even(4);
    return 0;
}
