#include <stdio.h>

int main() {
    int arr[100], n, i;
    int even = 0, odd = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Number of Even Elements = %d\n", even);
    printf("Number of Odd Elements = %d\n", odd);

    return 0;
}