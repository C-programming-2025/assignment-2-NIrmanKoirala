#include<stdio.h>
int main(){
    int n,fact=1,i=1;
    printf("enter a number: ");
    scanf("%d",&n); 
    if (n<0){
        printf("Factorial is not defined for negative numbers.\n");
    }
    else if (n==0){
        printf("factorial of %d is 1",n);
    }
else{      
    while (i<=n){
        fact = fact *i;
        i++;
    }
        printf("Factorial of %d is %d\n",n,fact);
    }

    return 0;
}