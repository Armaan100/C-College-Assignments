#include<stdio.h>

int main(){
    //Merge two arrays
    int arr1[100];
    int arr2[100];

    // int arr1_size=sizeof(arr1)/sizeof(arr1[0]);
    // int arr2_size=sizeof(arr2)/sizeof(arr2[0]);

    // for(int i=0; i<=arr2_size-1; i++){
    //     arr1[i+5]=arr2[i];
    // }

    // for(int i=0; i<=(arr1_size+arr2_size)-1; i++){
    //     printf("%d ", arr1[i]);
    // }

    int arr1_len=0;
    int arr2_len=0;


    while(1){
        int choice, element=0;
        printf("To Enter number to first array enter 1 else enter 0: ");
        scanf("%d", &choice);
        if(choice==1){
            printf("Enter the number: ");
            scanf("%d", &element);
            arr1[arr1_len]=element;
            arr1_len++;
        }
        else if(choice==0){
            break;
        }
    }


    while(1){
        int choice, element=0;
        printf("To Enter number to second array enter 1 else enter 0: ");
        scanf("%d", &choice);
        if(choice==1){
            printf("Enter the number: ");
            scanf("%d", &element);
            arr2[arr2_len]=element;
            arr2_len++;
        }
        else if(choice==0){
            break;
        }
    }


    //MERGIGN ARRAYS
    for(int i=0; i<=arr2_len-1; i++){
        arr1[i+arr1_len]=arr2[i];
    }

    //MERGED ARRAY
    for(int i=0; i<=(arr1_len+arr2_len)-1; i++){
        printf("%d ", arr1[i]);
    }


}