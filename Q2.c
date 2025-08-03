#include <stdio.h>

int main() {
    int n, i, num;
    int positive = 0, negative = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &num);
        if(num > 0)
            positive++;
        else if(num < 0)
            negative++;
    }

    printf("Total Positive Numbers = %d\n", positive);
    printf("Total Negative Numbers = %d\n", negative);

    return 0;
}