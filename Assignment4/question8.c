#include<stdio.h>

int main(){
    //Largest and smallest element in array

    int arr[]={1,2,3,4,5,6,7,8,9,10};

    int arr_len=sizeof(arr)/sizeof(arr[0]);

    int max_num=arr[0], min_num=arr[0];
    for(int i=0; i<=arr_len-1; i++){
        if(arr[i]>max_num){
            max_num=arr[i];
        }
        else if(arr[i]<min_num){
            min_num=arr[i];
        }   
    }

    printf("Largest number in array: %d\n", max_num);
    printf("Smallest number in array: %d\n", min_num);
}