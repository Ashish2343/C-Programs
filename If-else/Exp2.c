# include <stdio.h>
int main(){
    int x;
    int y;
    int z;
    printf("Enter the first number \n");
    scanf("%d",&x);
    printf("Enter the Second number \n ");
    scanf("%d",&y);
    printf("Enter the Third number \n"); 
    scanf("%d",&z);

    if(x > y && x > z){
        printf("Greatest Number is %d",x);
    }else if (y > x && y > z)
    {
        printf("Greatest Number is %d",y);
    }else{
        printf("Greatest Number is %d",z);
    }
    return 0;
}