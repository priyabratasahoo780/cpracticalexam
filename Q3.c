// Q3. Write a program that uses a do-while loop to repeatedly take numbers until the use enter 0; finally, print the sum of all entered numbers.
#include<stdio.h>
int main(){
    int num, sum = 0;
    do{
        printf("Enter a number (0 to stop): ");
        scanf("%d", &num);
        sum += num;
    }while(num != 0);
    printf("Sum of all entered numbers: %d\n", sum);
    return 0;
}