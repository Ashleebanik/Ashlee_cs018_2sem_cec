#include<stdio.h>
int main(){
    int num,org,rev,d;
    printf("Enter the number");
    scanf("%d",&num);
    while(num!=0){
        d=num%10;
        rev=rev*10+d;
        num=num/10;

    }
    if (org==rev){
        printf("It is a plaindrome");
    }
    else{
        printf("not a palindrome");
    }
}