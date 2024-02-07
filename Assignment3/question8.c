#include<stdio.h>
#include<math.h>
int main(){
    //Write a program to read in 5 numbers and compute the average, max, min, standard
    //deviation.



    //Average
    // float sum=0;
    // for(int i=0; i<=4; i++){
    //     float num;
    //     printf("Enter number: ");
    //     scanf("%f", &num);
    //     sum+=num;
    // }
    // printf("Average is: %.2f\n", sum/5);




    //Max
    // float max, temp_f_max;
    // for(int i=0; i<=4; i++){
    //     printf("Enter number: ");
    //     if(i==0){
    //         scanf("%f", &max);
    //     }
    //     else{
    //         scanf("%f", &temp_f_max);
    //         if(temp_f_max>max){
    //             max=temp_f_max;
    //         }
    //     }
    // }

    // printf("Max no. is: %.2f", max);




    //MIN
    // float min, temp_f_min;
    // for(int i=0; i<=4; i++){
    //     printf("Enter number: ");
    //     if(i==0){
    //         scanf("%f", &min);
    //     }
    //     else{
    //         scanf("%f", &temp_f_min);
    //         if(temp_f_min<min){
    //             min=temp_f_min;
    //         }
    //     }
    // }

    // printf("Max no. is: %.2f", min);    


    //Standard Deviation
    float arr_num[5];
    float avg, sum_f_std_dev=0, sum_f_avg=0, std_dev;
    for(int i=0; i<=4; i++){
        printf("Enter number: ");
        scanf("%f", &arr_num[i]);
    }
    for(int i=0; i<=4; i++){
        sum_f_avg+=arr_num[i];
    }
    avg=sum_f_avg/5;
    for (int i = 0; i <=4; i++)
    {
        sum_f_std_dev+=pow(arr_num[i]-avg, 2);
    }
    std_dev=sqrt(sum_f_std_dev/5);
    printf("%f", std_dev);
}