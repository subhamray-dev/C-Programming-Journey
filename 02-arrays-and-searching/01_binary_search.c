#include <stdio.h>

int main(){
    int i, n, key, low, high, mid, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    // Binary Search requires a sorted array
    printf("\nEnter %d elements in SORTED (ascending) order:-\n", n);
    for(i = 0; i < n; i++){
        printf("A[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nEnter the number to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    // Divide the search space in half on each step
    while(low <= high){
        mid = (low + high) / 2;

        if(a[mid] == key){
            printf("\nElement %d found at index position %d!\n", key, mid);
            found = 1;
            break;
        }
        else if(key > a[mid]){
            low = mid + 1;   // Discard left half, search right half
        }
        else{
            high = mid - 1;  // Discard right half, search left half
        }
    }

    if(found == 0){
        printf("\nElement %d is not present in the array.\n", key);
    }

    return 0;
}