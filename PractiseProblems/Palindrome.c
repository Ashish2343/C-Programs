#include<stdio.h>

int main(){
    int x = 121;
    int reverse = 0;
    int temp = x;
    while(temp !=0){
        int rem = temp %10;
        reverse = reverse * 10 + rem;
        temp = temp/10;
    }
    if(reverse==x){
        printf("%d is a palindrome",x);
    }else{
        printf("%d is not a palindrome",x);
    }
}