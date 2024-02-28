#include<stdio.h>

int main(){

    //Reverse the array

    int arr[]={1,2,3,4,5,6,7,8,9,10,11};
    int arr_size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<((arr_size-1)/2); i++){  
        arr[i]=arr[i]+arr[arr_size-1-i];
        arr[arr_size-1-i]=arr[i]-arr[arr_size-1-i];
        arr[i]=arr[i]-arr[arr_size-1-i];
    }



    for(int i=0; i<=arr_size-1; i++){
        printf("%d ", arr[i]);
    }
}