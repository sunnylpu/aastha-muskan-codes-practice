#include<stdio.h>
int main(){
    int j,n;
    printf("input the no: ");
    scanf("%d",&n);
    printf("\n");
    for(j=1;j<=10;j++){
        printf("%d * %d = %d \n",n,j,n*j);

    }
    return 0;
}