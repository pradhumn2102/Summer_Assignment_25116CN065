#include <stdio.h>

int main() {
    int arr[100], n, i, key, count = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find frequency: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            count++;
        }
    }

    printf("Frequency of %d = %d", key, count);

    return 0;
}