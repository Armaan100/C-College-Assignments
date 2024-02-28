#include<stdio.h>

int main(){
    //Union and Intersection of two arrays

    int arr1[]={1,2,3,4,5};
    int arr2[]={2,4,3,9,7};

    int arr1_len=sizeof(arr1)/sizeof(arr1[0]);
    int arr2_len=sizeof(arr2)/sizeof(arr2[0]);


    //Code for deletion of duplicate elements

    //Then code continues

    int intersection_arr[100];
    int union_arr[100];
    int len_intersection=0;
    int len_union=0;

    //Intersection
    for(int i=0; i<=arr1_len-1; i++){
        int present=0;
        for(int j=0; j<=arr2_len-1; j++){
            if(arr1[i]==arr2[j]){
                present=1;
            }
        }
        if(present==0){
            intersection_arr[len_intersection]=arr1[i];
            len_intersection++;
        }
    }   

    //Union
    for(int i=0; i<=arr1_len-1; i++){
        union_arr[i]=arr1[i];
        len_union++;
    }

    for(int i=0; i<=arr1_len-1; i++){
        int present=0;
        for(int j=0; j<=arr2_len-1; j++){
            if(arr1[i]==arr2[j]){
                present=1;
            }
        }
        if(present==0){
            union_arr[len_union]=arr2[i];
            len_union++;
        }
    }

    for(int i=0; i<=len_intersection-1; i++){
        printf("%d ", intersection_arr[i]);
    }    

    for(int i=0; i<=len_union-1; i++){
        printf("%d ", union_arr[i]);
    }
}