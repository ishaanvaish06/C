//CH.SC.U4AIE25020
//PERMUTATIONS OF ARRAY ELEMENTS  O(n!)

#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void permute(int arr[], int left, int right) {
    if (left == right) {
        printArray(arr, right + 1);
        return;
    }
    for (int i = left; i <= right; i++) {
        swap(&arr[left], &arr[i]);
        permute(arr, left + 1, right);
        swap(&arr[left], &arr[i]); 
    }
}
void main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    permute(arr, 0, n - 1);
}
