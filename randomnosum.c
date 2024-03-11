#include<stdio.h>
int main(){
    int i,n,sum=0;
    float avg;
    printf("input the 10 no: \n");
    for (i=1;i<=10;i++){
        printf("number-%d :",i);
        scanf("%d",&n);
        sum+=n;
    }
    avg = sum/10;
    printf("\nsum of 10 number is : %d\n",sum);
    printf("average of 10 number is : %.2f",avg);   
}