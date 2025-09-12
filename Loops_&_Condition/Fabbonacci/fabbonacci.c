#include <stdio.h>

int main()
{
    int n, t1 = 0, t2 = 1, t3;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    printf("Fibonacci Series: ");

    if (n == 1) {
        printf("%d\n", t1);
        return 0;
    }

    printf("%d %d ", t1, t2);

    for (int i = 3; i <= n; i++) {
        t3 = t1 + t2;
        printf("%d ", t3);
        t1 = t2;
        t2 = t3;
    }

    printf("\n");
    return 0;
}
