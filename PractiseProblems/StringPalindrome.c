#include<stdio.h>
#include<string.h>
int main(){
    char str[10] = "naman";
    int i,j;
    i = 0;
    j = strlen(str)-1;
    printf("%d\n",j);
    while(i<j){
        if(str[i]== str[j]){
            i++;
            j--;
    }else{
        printf("not palindrome");
        return 0;
        }
    }
printf("palindrome");
}