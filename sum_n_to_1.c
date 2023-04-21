#include<stdio.h>

// printing n to 0 sumation
 int sum(int n){
        // base conditon
            if(n==0){
                return 0;
            }
        // make problem smaller
        return n + sum(n-1);
    }
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}