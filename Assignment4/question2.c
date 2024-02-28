#include <stdio.h>

int main() {

    // To insert an element to a given element in an array

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int pos, element;

    printf("Enter the position where you want to insert the element according to the index of an array: ");
    scanf("%d", &pos);
    printf("Enter the element you want to insert: ");
    scanf("%d", &element);

    int arr_size = sizeof(arr) / sizeof(arr[0]);

    for(int i = arr_size; i >= pos; i--) {
        arr[i] = arr[i-1];
    }  

    arr[pos] = element;

    for(int i = 0; i <= arr_size; i++) {
        printf("%d ", arr[i]);
    }

}

