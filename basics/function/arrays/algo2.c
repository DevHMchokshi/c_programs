#include <stdio.h>

int main() {
    int arr[100], even[100], odd[100];
    int n, i, evenCount = 0, oddCount = 0;

    // Taking size of array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Taking array elements input
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Separating even and odd
        if(arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        } else {
            odd[oddCount++] = arr[i];
        }
    }

    // Display original array
    printf("\nOriginal Array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Display even numbers
    printf("\nEven Numbers: ");
    for(i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }

    // Display odd numbers
    printf("\nOdd Numbers: ");
    for(i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}
