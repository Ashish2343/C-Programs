# include <stdio.h>
int main(){
    int i;
    printf("enter the number");
    scanf("%d \n",&i);
    int sum ,mul;
    
    float div;
    int min;
    int Uniary_Addition;
    int Uniary_Subtraction;
    sum = i+5;
    min =  i-5;
    mul = i*5;
    div = i/5;
    Uniary_Addition = i++;
    Uniary_Subtraction = i--;
    printf("Sum operation %d \n",sum);
    printf("mul operation %d \n",mul);
    printf("subtraction operation %d \n",min);
    printf("div operation %f \n",div);
    printf("Uniary addition is %d \n", Uniary_Addition);
    printf("Uniary subtraction is %d \n", Uniary_Subtraction);
    return 0;
}