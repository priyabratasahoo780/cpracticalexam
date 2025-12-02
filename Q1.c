// q1 write recursive function to compute the sum of the digits of a number.

#include<stdio.h>
 int sumDigit(int n, int remainder){
    if(n == 0){
        return remainder;
    }
    return sumDigit(n/10, remainder + n%10);
 }
int main(){
    int n= 123;
    int remainder = 0;
    printf("%d",sumDigit(n, remainder));
    return 0;
}
