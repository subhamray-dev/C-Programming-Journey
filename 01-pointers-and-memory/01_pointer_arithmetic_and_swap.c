#include <stdio.h>

// Call by reference: modifies original variables via their RAM address
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 25, y = 50;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n\n", x, y);

    // Pointer arithmetic and contiguous RAM address inspection
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr;

    printf("Array elements and their RAM address: \n");
    for(int i = 0; i < n; i++){
        printf("Index %d | Value: %d | Address: %p\n", i, *(ptr + i), (void *)(ptr + i));
    }
    return 0;
}