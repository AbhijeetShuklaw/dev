#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    float average;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];  // Variable-length array (C99 and later)

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = (float)sum / n;

    printf("Average = %.2f\n", average);

    return 0;
}
