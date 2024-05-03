#include <stdio.h>

int facto(int n){
    if(n==1)
        return 1;
    else
        return n*facto(n-1);
}
int main(){
    int x = 145;
    int temp = x;
    int sum = 0;
    while(temp != 0){
       int  digit = temp%10;
        sum = sum + facto(digit);
        temp = temp/10;
    }
    if(sum == x){
        printf("%d is a strong number",x);
    }else{
        printf("%d is not a strong number",x);
    }
}