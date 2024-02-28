#include<stdio.h>

int main() {
    int arr[20]={1,2,3,4,5,6,7,8,9,10};

    // int i=0;
    // int j=sizeof(arr)/sizeof(arr[0])-1;

    // while(i<=j){
    //     int temp=arr[i];
    //     arr[i]=arr[j];
    //     arr[j]=temp;
    //     i++;
    //     --j;
    // }

    int element, pos;

    printf("Enter the element : ");
    scanf("%d", &element);
    printf("Enter the position wrt array: ");
    scanf("%d", &pos);

    int temp=arr[9];
    printf("%d", temp);

    for(int i=9; i>=pos; i--){
        arr[i]=arr[i-1];
    }

    arr[10]=temp;
    arr[pos]=element;

    for(int i=0; i<=10; i++){
        printf("%d ", arr[i]);
    }
}
