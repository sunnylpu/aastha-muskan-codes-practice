#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("input no of terms: ");
    scanf("%d",&n);
    printf("\nThe odd no are: ");
    for (i=1;i<=n;i++){
        printf("%d ",2*i-1);
        sum += 2 * i-1;
    }
    printf("\nThe sum of odd natural no upto %d terms : %d\n",n,sum);
    return 0;

}