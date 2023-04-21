#include<stdio.h>
int factorial(int n){
    // base case
    if(n==1){
        return 1;
    }
    // make problem small
    return n * factorial(n-1);
}
int main()
{
     int n;
    scanf("%d",&n);
    printf("%d",factorial(n));
    return 0;
}