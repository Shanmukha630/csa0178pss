#include <stdio.h>
int calculateSum(int n) {
    return (n * (n + 1)) / 2;
}
int main() {
    int n, sum;
    printf("Enter the value of 'n': ");
    scanf("%d", &n);
    sum = calculateSum(n);
    printf("Sum of the series 1 + 2 + 3 + ... + %d is: %d\n", n, sum);
    return 0;
}

