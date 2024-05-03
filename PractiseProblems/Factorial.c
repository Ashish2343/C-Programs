#include<stdio.h>

// Recursive 
int recfact(int n){
    if(n==1)
        return 1;
    else
        return n*itrfact(n-1);
}

// iteratively

int itrfact(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int x = recfact(5);
    int y = itrfact(5);
    printf("x = %d\n",x);
    printf("y = %d\n",y);
}