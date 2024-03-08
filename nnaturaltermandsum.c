#include<stdio.h>
int main(){
    int j,n,sum=0;
    printf("input value of terms: ");
    scanf("%d",&n);
    printf("\nThe first %d natural numbers are:\n",n);
    for (j=-4;j<=n;j++){
        printf("%d",j);
        sum+=j;
    }
    printf("\n The sum of natural numbers upto %d terms : %d\n",n,sum);
}