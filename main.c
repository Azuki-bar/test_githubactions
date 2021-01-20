#include <stdio.h>
int fraction(int n) {
    if (n < 2) {
        return 1;
    } else {
        return (n * fraction(n - 1))
    }
}
int main(void) {
    printf("Hello world!\n");
    printf("%d\n", fraction(10));
}
