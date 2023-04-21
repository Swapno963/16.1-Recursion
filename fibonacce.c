#include<stdio.h>
int fibo(int n){
    // base case
    if(n ==0 || n==1){// need to return 0 if n is o and same for 1
        return n;
    }
    // make problem small
    return fibo(n-1) + fibo(n-2); // fibo(n) = previous + previous -1
}
int main()
{
     int n;
    scanf("%d",&n);
    printf("%d",fibo(n));
    return 0;
}