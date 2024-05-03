#include<stdio.h>

int CountDigit(int x){
    int count=0;
    while(x!=0){
        x=x/10;
        count++;
    }
    return count;
}

int main(){
    int x = 153;
    int original = x; // Store the original number
    
    int count = CountDigit(x);

    int result = 0;
    while(x!=0){
        int rem = x%10;
        int mul = 1;
        for(int i = 0; i < count; i++){
            mul *= rem; // multiplying rem count times
        }
        result += mul; // Add the multiplied value to result
        x = x/10;
    }

    if(result == original){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
}
