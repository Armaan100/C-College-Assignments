#include<stdio.h>

int main(){
    //Binary Search

    int element_search;
    printf("Enter the element you want to search: ");
    scanf("%d", &element_search);   

    int arr[]={1,2,3,4,5,6,7,8,9,10};

    int arr_size=sizeof(arr)/sizeof(arr[0]);

    int start=0;
    int end=arr_size-1;

    while(start<=end){
        int mid=(start+end)/2;

        if(arr[mid]==element_search){
            printf("Element is present");
            break;
        }
        else if(arr[mid]<element_search){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
}