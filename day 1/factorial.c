#include<stdio.h>
int main(){
    int num,fact=1;
    printf("Enter the number");
    scanf("%d",&num);
    if (num<0){
        printf("Factorial does not exist");        
    }
    else {
        for(int i=1;i<=num;i++){
            fact= fact*i;
        }
        
        printf("Factorial of a number is %d",fact);
    }


}