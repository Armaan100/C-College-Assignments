#include<stdio.h>

int main(){
    // Delete a given element in an array

    int arr[]={1,2,3,4,5,6,7,8,9,10};

    int arr_size=sizeof(arr)/sizeof(arr[0]);

    int element_delete;
    printf("Enter the element you want to delete: ");
    scanf("%d", element_delete);

    int pos_element_delete;

    for(int i=0; i<=arr_size-1; i++){
        if(arr[i]==element_delete){
            pos_element_delete=i;
            break;
        }
    }

    for(int i=pos_element_delete; i<=arr_size-2; i++){
        arr[i]=arr[i+1];
    }

    for(int i=0; i<=arr_size-2; i++){
        printf("%d ", arr[i]);
    }
}