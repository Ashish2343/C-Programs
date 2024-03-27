# include <stdio.h>
int main(){
    int n =5;
    int r = 2;
    int n_fact=  1;
    int n_min_r_fact  = n-r;
    int fact_dec = 1;
    while (n != 1)
    {
        n_fact = n_fact * n;
        n--;
    }   while (n_min_r_fact != 1)
    {
        fact_dec  = fact_dec * n_min_r_fact;
        n_min_r_fact--;
    }
    float soln =  n_fact/fact_dec;
    printf("%f", soln);
    return 0;
    
}