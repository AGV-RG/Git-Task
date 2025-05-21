#include <stdio.h>

// Function to search for a number in an array
void search_for_number(int *a, int n, int search) {
    int i;
    for(i = 0; i < n; i++) {
        if(a[i] == search) {
            printf("%d is present!\n", search);
            return;
        }
    }
    printf("%d is not present.\n", search);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Example array
    int size = sizeof(arr) / sizeof(arr); // Calculate array size
    int search; // Number to search

    printf("Enter the number to search: ");
    scanf("%d", &search);

    search_for_number(arr, size, search); // Call the search function

    return 0;
}
