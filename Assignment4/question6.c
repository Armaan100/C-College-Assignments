#include<stdio.h>

int main(){
    //Sum and Avg of array elements

    //SUM
    int arr[]={1,2,3,4,5,6,7,8,9,10};

    int arr_size=sizeof(arr)/sizeof(arr[0]);

    int sum_arr_elements=0;
    // float avg_arr_elements;

    for(int i=0; i<=arr_size-1; i++){
        sum_arr_elements+=arr[i];
    }
    printf("Sum of array elements: %d\n", sum_arr_elements);

    // avg_arr_elements=(float)sum_arr_elements/arr_size;

    printf("Average of array elements: %.2f\n", (float)sum_arr_elements/arr_size);
}