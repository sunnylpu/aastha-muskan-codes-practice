#include<stdio.h>
int main(){
    int j,sum=0;
    printf("The sum of  first 10 natural numbers are : ");
    for (j=0;j<=10;j++)
    {
        sum+=j;
        printf("%d",j);
    }
    printf("The sum is : %d\n",sum);
}