# include<stdio.h>
int main(){
    int x = 18;
    int y  =12;
    int remainder;
    while (y != 0)
    {
        remainder = x%y;
        x=y;
        y = remainder;
    }
    printf("remainder is %d",x);
    return x;
    
}