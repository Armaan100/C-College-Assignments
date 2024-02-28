#include <stdio.h>

int main() {
    // Linear Search

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int arr_size=sizeof(arr)/sizeof(arr[0]);

    int element_search;
    printf("Enter the element you want to search: ");
    scanf("%d", &element_search);

    for(int i=0; i<=arr_size-1; i++){
        if(arr[i]==element_search){
            printf("Element is present");
            break;
        }
    }

}
